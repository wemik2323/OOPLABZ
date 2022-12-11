#ifndef LAB5_CLASSSTACK_H
#define LAB5_CLASSSTACK_H
#include <iostream>

template <typename T>

class classstack {
private:
    struct node {
        T value;
        node *previous;
    };

    node *last;
    unsigned int size;

public:
    explicit classstack() : last{nullptr}, size{0} {}

    explicit classstack(T somevalue) : last{new(node){somevalue, nullptr}}, size{1} {

    }

    classstack(const classstack& A):last{nullptr},size{0} {
        node* tmp = A.last;
            for (;tmp -> previous; tmp = tmp -> previous) {
                push(tmp->value);
            }
        push(tmp->value);
    }

    void push(T somevalue) {
        last = new (node){somevalue, last};
        ++size;
    }

    T pop() {
        node* tmp;
        T a;
        tmp = last -> previous;
        a = last -> value;
        delete last;
        last = tmp;
        --size;
        return a;
    }

    void printstack() {
        unsigned int j = size;
        for (node *i = last; i != nullptr; i = i -> previous) {
            std::cout << "Element #"  << j << '\n' << i->value << '\n' << i->previous << '\n';
            --j;
        }
        std::cout << "Content" << '\n' << last << '\n' << size << '\n';
    }


    ~classstack(){
        if (last != nullptr) {
            node* tmp;
            while (last->previous != nullptr) {
                tmp = last->previous;
                delete last;
                last = tmp;
            }
            delete last;
            last = nullptr;
        }
    }
};

#endif
