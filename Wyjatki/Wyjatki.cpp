#include <iostream>

int readParameters(int howManyNumbers, int* tableWithParameters) // funkcja ktora zwraca kod bledu
{
    if (tableWithParameters == nullptr)
    {
        return -1; //oznacza ze nie otrzymalismy poprawnej tablicy
    }
    if (howManyNumbers < 0)
    {
        return -2; // oznacza ze dostalismy bledna (ujemna) ilosc parametrow do wczytywania
    }
    for (int i = 0; i < howManyNumbers; ++i)
    {
        //kod wczytujacy parametry
        //tableWithParameters[i] = .....?
    }
    return 0; // oznacza brak bledu
}

static int error = 0; // gobalna flaga bledu

Vector readParameters(int howManyNumbers) // funkcja ktora ustawia globalna flage bledu
{
    error = 0;
    Vector vect;

    if (howManyNumbers < 0)
    {
        throw std::string("howManyNumbers nie moze byc mniejsze od 0");
        //error = -2;
        //return vect; //zwracamy pusty/ domyslny obiekt ktoreo nie powinno sie uzywac
        //return -2; // oznacza ze dostalismy bledna (ujemna) ilosc parametrow do wczytywania
    }
    for (int i = 0; i < howManyNumbers; ++i)
    {
        //vect.push_back(); // zaplenianie wektora w petli
    }
    return 0; // oznacza brak bledu
}

int main()
{
    Vector vect;
    
    try
    {
        vect = readParameters(7);
    }
    catch (std::string& errorString)
    {
        std::cout << errorString << std::endl;
        throw errorString; //rethrow
    }
    catch(...)
    {
        std::cout << "Jakis nieznany blad" << std::endl;
    }
    //int* tab = new int[7];
    //int error = readParameters(7, tab);

    //if (!error)
    //{
    //    // tutaj kod ktory sie wykona
    //}
    //else
    //{
    //    std::cout << "Zdazylo sie cos zlego!\n";
    //    //obsluga bledow
    //}


    //int* tab = new int[7];
    //Vector vect = readParameters(7, tab);

    //if (!error)
    //{
    //    // tutaj kod ktory sie wykona
    //}
    //else
    //{
    //    std::cout << "Zdazylo sie cos zlego!\n";
    //    //obsluga bledow
    //}
}

