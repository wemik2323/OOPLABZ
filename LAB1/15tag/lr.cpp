#include "class.h"

int main() {
    int im, re, im1, re1;
    std::cout << "Введите коэффициенты двух комплексных чисел (сначала real затем imaginary)\n";
    std::cin >> re >> im;
    std::cin >> re1 >> im1;
    Complex s1(re, im);
    Complex s2(re1, im1);
    s1=s1+s2;
    s1.vivod();
    s1=s1-s2;
    s1.vivod();
    s1=s1*s2;
    s1.vivod();
    s1=s1/s2;
    s1.vivod();
 //   Complex s3(0, 0);
 //   s1=s1/s3;
}

