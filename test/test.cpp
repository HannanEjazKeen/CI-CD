#include<gtest/gtest.h>
#include "../functions.h"


TEST(EvenOddTest, EvenNumber)
{
  EXPECT_EQ(even_odd(4), false);
}

TEST(EvenOddTest, OddNumber)
{
  EXPECT_EQ(even_odd(5), true);
}

TEST(AdditionTest, PositiveNumbers)
{
  EXPECT_EQ(add(2,3),5);
}

TEST(AdditionTest, NegativeNumbers)
{
  EXPECT_EQ(add(-2,-7),-9);
}

TEST(AdditionTest, ZeroNumbers)
{
  EXPECT_EQ(add(0,3),3);
}

TEST(SubtractionTest, PositiveNumbers)
{
  EXPECT_EQ(subtract(2,3),-1);
}

TEST(SubtractionTest, NegativeNumbers)
{
  EXPECT_EQ(subtract(-2,-7),5);
}

TEST(SubtractionTest, ZeroNumbers)
{
  EXPECT_EQ(subtract(0,3),-3);
}

TEST(MultiplicationTest, PositiveNumbers)
{
  EXPECT_EQ(multiply(2,3),6);
}

TEST(MultiplicationTest, NegativeNumbers)
{
  EXPECT_EQ(multiply(-2,-7),14);
}

TEST(MultiplicationTest, ZeroNumbers)
{
  EXPECT_EQ(multiply(0,3),0);
}

TEST(DivisionTest, PositiveNumbers)
{
  EXPECT_EQ(divide(3,2),1.5);
}

TEST(DivisionTest, NegativeNumbers)
{
  EXPECT_EQ(divide(-7,-2),3.5);
}

TEST(DivisionTest, ZeroNumbers)
{
  EXPECT_EQ(divide(0,3),0);
}

TEST(SwapTest, PostiveNumbers)
{
  int x=3, y=2;
  swap(x,y);
  EXPECT_EQ(x,2);
  EXPECT_EQ(y,3);
}

TEST(SwapTest, NegativeNumbers)
{
  int x=-3, y=-2;
  swap(x,y);
  EXPECT_EQ(x,-2);
  EXPECT_EQ(y,-3);
}

class SwapTestC : public ::testing::TestWithParam<std::tuple<int,int>> {};

TEST_P(SwapTestC, SwapNumbers)
{
  int x = std::get<0>(GetParam());
  int y = std::get<1>(GetParam());
  
  int swapedx = y;
  int swapedy = x;
  
  swap(x,y);
  
  EXPECT_EQ(x,swapedx);
  EXPECT_EQ(y,swapedy);
}

INSTANTIATE_TEST_SUITE_P(
  SwapTests,
  SwapTestC,
  ::testing::Values(
    std::make_tuple(2,3),
    std::make_tuple(5,-6),
    std::make_tuple(-8,7),
    std::make_tuple(5,0)
  )
);

class LargestNumber : public ::testing::TestWithParam<std::tuple<int,int,int,int>> {};

TEST_P(LargestNumber, LargestNumbers)
{
  int a = std::get<0>(GetParam());
  int b = std::get<1>(GetParam());
  int c = std::get<2>(GetParam());
  
  int expectedResult = std::get<3>(GetParam());
  EXPECT_EQ(largestNumber(a,b,c),expectedResult);
}

INSTANTIATE_TEST_SUITE_P(
  LargestNumber_,
  LargestNumber,
  ::testing::Values(
    std::make_tuple(1,2,3,3),
    std::make_tuple(15,23,13,23),
    std::make_tuple(11,22,53,53),
    std::make_tuple(15,12,13,15)
  )
);

class FabonacciNumber : public ::testing::TestWithParam<std::tuple<int,int>> {};

TEST_P(FabonacciNumber, FabonacciNumbers)
{
  int n = std::get<0>(GetParam());
  
  int result = std::get<1>(GetParam());
  
  EXPECT_EQ(fabonacciSeries(n), result);
}

INSTANTIATE_TEST_SUITE_P(
  FabonacciNumber_,
  FabonacciNumber,
  ::testing::Values(
    std::make_tuple(3, 1),
    std::make_tuple(10, 34),
    std::make_tuple(7, 8)
  )
);

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
