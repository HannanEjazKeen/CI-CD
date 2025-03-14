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

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
