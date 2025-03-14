#include<gtest/gtest.h>
#include "../math_functions.h"
#include "../functions.h"

TEST(EvenOddTest, EvenNumber)
{
  EXPECT_EQ(even_odd(4), false);
}

TEST(EvenOddTest, OddNumber)
{
  EXPECT_EQ(even_odd(5), true);
}

/*TEST(AdditionTest, PositiveNumbers)
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
*/
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
