// Zadanie1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double divide (double a, double b)
{
    if (b == 0)
    {
         throw std::string("b nie moze byc rowne 0");
    }
    return a / b;

}


int main()
{
    try
    {
        divide(4, 0);
    }
    catch (std::string& errorString)
    {
        std::cout << errorString << std::endl;
    }

}

