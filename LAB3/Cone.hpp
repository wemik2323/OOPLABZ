#ifndef PROJECTS_CONE_H
#define PROJECTS_CONE_H
#include <iostream>
#include <string>
class Cone {
public:
    double d;
    std::string s;

public:
    Cone() : d{0}, s{""} {}
    Cone(double a, std::string b) : d{a}, s{b} {}
    Cone(const Cone &A) : d{A.d}, s{A.s} {}

    void print() {
        std::cout << "CLASS ONE\n";
        std::cout << "double = " << d << '\n';
        std::cout << "string = " << s << "\n\n";
    }

    double getd() { return d; }

    std::string gets_() { return s; }

    ~Cone() {}
};
#endif
