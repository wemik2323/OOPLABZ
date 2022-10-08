#pragma once
#include "Cone.hpp"

class Ctwo {
   private:
    double d;
    Cone* p;

   public:
    Ctwo() : d{0}, p{new Cone} {}
    Ctwo(double a, Cone& A) : d{a}, p{new Cone{A.getd(), A.gets_()}} {}
    Ctwo(const Ctwo& A) : d{A.d} {//p{new Cone{A.p->d, A.p->s} {}
        p = new Cone;
        p->d = A.p->d;
        p->s = A.p->s;
    }

    void print() {
        std::cout << "double = " << d << '\n';
        p->print();
    }

    double getd() { return d; }
    Cone* getCone() { return p; }
};
