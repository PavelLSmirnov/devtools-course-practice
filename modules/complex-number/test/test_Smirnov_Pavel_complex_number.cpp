// Copyright 2024 Smirnov Pavel

#include <gtest/gtest.h>
#include <cmath>
#include "include/complex_number.h"

TEST(Smirnov_Pavel_ComlpexNumberTest, getTest) {
    double real = 1.0;
    double imaginary = 1.0;

    ComplexNumber complex = ComplexNumber(real, imaginary);

    ASSERT_EQ(complex.getRe(), real);
    ASSERT_EQ(complex.getIm(), imaginary);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, setTest) {
    double real = 1.0;
    double imaginary = 1.0;

    ComplexNumber complex;
    complex.setRe(real);
    complex.setIm(imaginary);

    ASSERT_EQ(complex.getRe(), real);
    ASSERT_EQ(complex.getIm(), imaginary);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, sumTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber sum = first + second;

    ASSERT_EQ(sum.getRe(), 3.0);
    ASSERT_EQ(sum.getIm(), 3.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, subTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber sub = first - second;

    ASSERT_EQ(sub.getRe(), -1.0);
    ASSERT_EQ(sub.getIm(), -1.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, mulTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber mul = first * second;

    ASSERT_EQ(mul.getRe(), 0.0);
    ASSERT_EQ(mul.getIm(), 4.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, divTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber sub = first / second;

    ASSERT_EQ(sub.getRe(), 0.5);
    ASSERT_EQ(sub.getIm(), 0.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, equalTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(1.0, 1.0);

    EXPECT_TRUE(first == second);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, nonEqualTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(-1.0, -1.0);

    EXPECT_FALSE(first == second);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, divideByZero) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber zero = ComplexNumber(0.0, 0.0);

    ASSERT_ANY_THROW(first / zero);
}
#include <gtest/gtest.h>
#include <cmath>
#include "include/complex_number.h"

TEST(Smirnov_Pavel_ComlpexNumberTest, getTest) {
    double real = 1.0;
    double imaginary = 1.0;

    ComplexNumber complex = ComplexNumber(real, imaginary);

    ASSERT_EQ(complex.getRe(), real);
    ASSERT_EQ(complex.getIm(), imaginary);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, setTest) {
    double real = 1.0;
    double imaginary = 1.0;

    ComplexNumber complex;
    complex.setRe(real);
    complex.setIm(imaginary);

    ASSERT_EQ(complex.getRe(), real);
    ASSERT_EQ(complex.getIm(), imaginary);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, sumTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber sum = first + second;

    ASSERT_EQ(sum.getRe(), 3.0);
    ASSERT_EQ(sum.getIm(), 3.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, subTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber sub = first - second;

    ASSERT_EQ(sub.getRe(), -1.0);
    ASSERT_EQ(sub.getIm(), -1.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, mulTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber mul = first * second;

    ASSERT_EQ(mul.getRe(), 0.0);
    ASSERT_EQ(mul.getIm(), 4.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, divTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(2.0, 2.0);

    ComplexNumber div = first / second;

    ASSERT_EQ(div.getRe(), 0.5);
    ASSERT_EQ(div.getIm(), 0.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, equalTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(1.0, 1.0);

    EXPECT_TRUE(first == second);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, nonEqualTest) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber second = ComplexNumber(-1.0, -1.0);

    EXPECT_FALSE(first == second);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, divideByZero) {
    ComplexNumber first = ComplexNumber(1.0, 1.0);
    ComplexNumber zero = ComplexNumber(0.0, 0.0);

    ASSERT_ANY_THROW(first / zero);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, absTest) {
    ComplexNumber complex = ComplexNumber(3.0, 4.0);
    
    ASSERT_EQ(complex.abs(), 5.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, argTest) {
    ComplexNumber complex = ComplexNumber(1.0, 1.0);
    
    ASSERT_EQ(complex.arg(), M_PI / 4);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, conjugateTest) {
    ComplexNumber complex = ComplexNumber(3.0, 4.0);
    
    ComplexNumber conjugate = complex.conjugate();
    
    ASSERT_EQ(conjugate.getRe(), 3.0);
    ASSERT_EQ(conjugate.getIm(), -4.0);
}

TEST(Smirnov_Pavel_ComlpexNumberTest, powTest) {
    ComplexNumber complex = ComplexNumber(1.0, 1.0);
    
    ComplexNumber pow = complex.pow(2);
    
    ASSERT_EQ(pow.getRe(), 0.0);
    ASSERT_EQ(pow.getIm(), 2.0);
}

