#include "Cone.hpp"
#include "Ctwo.hpp"

int main () {
    double a;
    std::string b;
    std::cin >> a;
    std::cin >> b;
    Cone s1(a, b);
    Ctwo s2(a, s1);
    s1.print();
    s2.print();
    std::cout << "Метод доступа double s1 - " << s1.getd() << '\n';
    std::cout << "Метод доступа string s1 - " << s1.gets_() << '\n';
    std::cout << "Метод доступа double s1 - " << s2.getd() << '\n';
    std::cout << "Метод доступа Cone s2 - " << s2.getCone() << '\n';

}
