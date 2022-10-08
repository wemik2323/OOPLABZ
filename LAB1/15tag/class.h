#pragma once
#include <math.h>
#include <iostream>

class Complex {
   private:
    double re;
    double im;

   public:
    Complex(double a, double b) : re(a), im(b) {}
    Complex operator*(const Complex &a) {
        Complex temp(re * a.re - im * a.im, re * a.im + im * a.re);
        return temp;
    }
    Complex operator/(const Complex &a) {
        if ((a.re * a.re + a.im * a.im) < abs(0.00001)) {
            std::cout << "Redemption on zero division\n";
            return *this;
        }
        Complex temp((re * a.re + im * a.im) / (a.re * a.re + a.im * a.im),
                     (im * a.re - re * a.im) / (a.re * a.re + a.im * a.im));
        return temp;
    }
    Complex operator-(const Complex &a) {
        Complex temp(re - a.re, im - a.im);
        return temp;
    }
    Complex operator+(const Complex &a) {
        Complex temp(re + a.re, im + a.im);
        return temp;
    }
    void operator=(const Complex &a) {
        im = a.im;
        re = a.re;
    }
    void vivod() { std::cout << re << " + " << im << " * i" << '\n'; }
    ~Complex() {}
};
