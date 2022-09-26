#pragma once
#include <cstring>
#include <iostream>

class Array {
   private:
    int *p;
    int size;

   public:
    Array() {
        size = 0;
        p = new int[size];
    }
    Array(int sizeofarr) {
        size = sizeofarr;
        p = new int[size];
    }
    Array(const Array &A) {
        size = A.size;
        p = new int[size];
        for (int i = 0; i < size; ++i) p[i] = A.p[i];
    }
    Array(int *A, int sizeofarr) {  // doubt ???
        size = sizeofarr;
        p = new int[size];
        for (int i = 0; i < size; ++i) p[i] = A[i];
    }
    Array operator=(const Array &A) {
        size = A.size;
        delete[] p;
        p = new int[size];
        for (int i = 0; i < size; ++i) p[i] = A.p[i];
        return *this;
    }
    void vivod() {
        std::cout << "Вывод массива на экран" << '\n';
        for (int i = 0; i < size; ++i) std::cout << p[i] << " ";
        std::cout << '\n';
    }
    void vvod() {
        delete[] p;
        std::cout << "Введите размер массива" << '\n';
        std::cin >> size;
        p = new int[size];
        for (int i = 0; i < size; ++i) std::cin >> p[i];
    }
    void insert(int *A, int index, int sizeofarr) {
        if (index < size) {
            int *Z = new int[size - index];
            memmove(Z, p + index, sizeof(int) * (size - index));
            // for (int i = 0; i < size - index; ++i)
            //     std::cout << Z[i] << " ";
            //     std::cout << '\n';
            int *J = new int[size + sizeofarr];
            for (int i = 0; i < index; ++i) J[i] = p[i];
            for (int i = index, j = 0; j < sizeofarr; ++i, ++j) {
                J[i] = A[j];
                // std::cout << "kek" << '\n';
                // std::cout << J[i] << " ";
            }
            for (int i = index + sizeofarr, j = 0; i < size + sizeofarr;
                 ++i, ++j)
                J[i] = Z[j];
            size = size + sizeofarr;
            delete[] Z;
            delete[] p;
            p = J;
        }
    }
    void insert1(int value) {
        int *Z = new int[size + 1];
        for (int i = 0; i < size; ++i) Z[i] = p[i];
        Z[size] = value;
        delete[] p;
        ++size;
        p = Z;
    }
    int max() {
        int max = 0;
        for (int i = 0; i < size; ++i)
            if (max < p[i]) max = p[i];
        return max;
    }
    ~Array() { delete[] p; }
};


