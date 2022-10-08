#include "class.h"

int main() {
    int size;
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; ++i) {
        a[i] = i + 1;
    }
    // for (int i = 0; i < size; ++i) std::cout << a[i];
    Array s1(a, size);
    // Array s2(s1);
    // Array s3;
    // Array s4;
    // s3 = s1;
    // s1.vivod();
    // s2.vivod();
    // s3.vivod();
    // s4.vvod();
    // s4.insert(a, 4, size);
    // s4.vivod();
    s1.insert1(5);
    s1.vivod();
    std::cout << "Максимальный элемент массива = " << s1.max() << '\n';
    return 0;
}
