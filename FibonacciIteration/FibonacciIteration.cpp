#include <iostream>

class Fibonacci
{
private:
    int sum;
    int a = 0;
    int b = 1;
public:
    int generate(int n)
    {
        do
        {
            sum = a + b;
            std::cout << a << " ";
            a = b;
            b = sum;
        } while (n > a);
        return a;
    }
};

int main()
{
    Fibonacci fib;
    std::cout << fib.generate(5);
}

