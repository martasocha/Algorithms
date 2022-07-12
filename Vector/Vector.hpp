#pragma once
class Vector
{

public:
	Vector(); //konstruktor domyslny, tworzy wektor pusty wektor
	Vector(unsigned int capacity); // rezerwuje miejsce na podana liczbe elementow
	virtual ~Vector(); //polimorfizm
	Vector(const Vector& old); //d-tor 

	void reserve(unsigned int capacity); // zwieksza rozmiar zarezerwowanej pamieci wektora
	//void resize(unsigned int size); // pozwala zmniejszyc rozmiar wektora
	
	//Gettery
	unsigned int capacity() const; //const - obiecujemy ze te metody nie zmieniaja pol
	unsigned int size() const;
	bool empty() const; // funkcja sprawdza nam size, zwraca prawde kiedy wektor jest pusty

	void insert(int value, unsigned int index); // powala wstawic wartosc do wektora na dana pozycje
	void remove(unsigned int index); //usuwa element z wektora
	void clear(); //usuwa wszytsie elementy z wektora jednak nie zmniejsza zarezerwowanej pamieci
	void push_back(const int& value); //metoda push back, odklada element na kolejne wolne miejsce, referencja zeby uniknac kopiowania

	int& operator[](unsigned int position); //oprator dostepu do danych
	Vector& operator=(const Vector& other);


	//Praca domowa:
	void copyTo(Vector& other, unsigned int index); // skopiuj zawartosc wektora other do indeksu w podane miejsce, przesuwa elementy od indekx , skopiowac zawartosc wekora other od podanego miejsca
	void remove(unsigned int from, unsigned int to); // uwua wiele wartosci od from do to
	void pop_back(); // usuwa ostatni element, zmniejszamy size

private: //podkreslinik do pol prywatnych
	unsigned _capacity;
	unsigned int _size;
	int* _data; //int* mData - notacja wegierska
};

