#ifndef LAB3_CTHREE_H
#define LAB3_CTHREE_H
#include "Ctwo.h"
#include "Cone.h"

class Cthree : public Ctwo{
private:
    int s;

public:
    Cthree() : Ctwo(), s{0} {}
    Cthree(int b, Cone &A, double a) : Ctwo(a, A), s{b} {}
    Cthree(const Cthree &A) : s{A.s}, Ctwo(A){}

    void print3() {
        std::cout << "CLASS THREE\n";
        std::cout << "int = " << s << '\n';
    }



    ~Cthree(){}
};

#endif //LAB3_CTHREE_H
