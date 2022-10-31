#include "Cone.h"
#include "Ctwo.h"
#include "Cthree.h"
int main() {
    Cone s1(2.5, "Hello");
    Ctwo s2(4.2, s1);
    Cthree s3(12, s1, 1.4), s4(s3);
    s1.print();
    s2.print();
    s3.print3();
    s3.print();
    s4.print3();
    s4.print();
    return 0;
}
