#include <gtest/gtest.h>
#include <Calculator.hpp>

struct CalculatorTest : public ::testing::Test {
  virtual void SetUp() override {}
  virtual void TearDown() override{}
};

/** Test of add method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckAdd) {
  Calculator p;
  std::cout<<"Checking Add function..."<<std::endl;
  EXPECT_EQ(p.add(-5,30), 25);
}
/** Test of add method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckAdd2) {
  Calculator p;
  std::cout<<"Checking Add function again..."<<std::endl;
  EXPECT_EQ(p.add(12,32), 44);
}

/** Test of subtract method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckSubtract) {
  Calculator p;
  std::cout<<"Checking Subtract function..."<<std::endl;
  EXPECT_EQ(p.subtract(-5,5), -10);
}
/** Test of subtract method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckSubtract2) {
  Calculator p;
  std::cout<<"Checking Subtract function again..."<<std::endl;
  EXPECT_EQ(p.subtract(12,11), 1);
}

/** Test of divide method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckDivide) {
  Calculator p;
  std::cout<<"Checking Divide function..."<<std::endl;
  EXPECT_EQ(p.divide(-30,5), -6);
}
/** Test of divide method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckDivide2) {
  Calculator p;
  std::cout<<"Checking Divide function again..."<<std::endl;
  EXPECT_EQ(p.divide(24,6), 4);
}

/** Test of multiply method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckMultiply) {
  Calculator p;
  std::cout<<"Checking Multiply function..."<<std::endl;
  EXPECT_EQ(p.multiply(-5,5), -25);
}
/** Test of multiply method, of class Calculator.
 * 
 */
TEST_F(CalculatorTest, CheckMultiply2) {
  Calculator p;
  std::cout<<"Checking Multiply function again..."<<std::endl;
  EXPECT_EQ(p.multiply(7,11), 77);
}