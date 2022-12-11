#include "class.hpp"
#include "classstack.hpp"
int main() {
    system("chcp 65001"); //CLION RUS LANGUAGE
    int im, re, im1, re1;
    std::cout << "Введите коэффициенты двух комплексных чисел (сначала real затем imaginary)\n";
    std::cin >> re >> im;
    std::cin >> re1 >> im1;
    Complex<double> s1(re, im);
    Complex<double> s2(re1, im1);
    s1=s1+s2;
    s1.vivod();
    s1=s1-s2;
    s1.vivod();
    s1=s1*s2;
    s1.vivod();
    s1=s1/s2;
    s1.vivod();
    Complex<double> s3(0, 0);
    s1=s1/s3;

    classstack<std::string> a("0_0");
    classstack<int> b;
    b.push(123);
    b.push(234);
    b.push(567);
    b.printstack();
    classstack<int> c(b);
    c.printstack();
    a.push("El polizia trinidad");
    a.printstack();
    a.pop();
    a.printstack();
}