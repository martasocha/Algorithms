// brudnopis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct A {
    ~A()
    {
        std::cout << "destructing A";
        foo();
    }

};

struct B {
    virtual void foo() const override
    {
        std::cout << "B: foo()";
    }
    void foo(int)
    {
        std::cout << "B: foo(int)";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
