#include <iostream>

class EuclideanAlgorithm
{
    int t = 0;
public:
    int calculateGCD(int a, int b)
    {
        do
        {
            t = b;
            b = a % b;
            a = t;
        } while (b != 0);
        return a;
    }
    int multiply(int a, int b)
    {
        return (a * b);
    }
};

int main()
{
    EuclideanAlgorithm e;
    std::cout << "NWD: " << e.calculateGCD(28, 24) << std::endl;
    std::cout << "NWW: " << e.multiply(28,24) / e.calculateGCD(28, 24);
}