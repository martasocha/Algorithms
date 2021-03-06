#pragma once
class Vector1
{

public:
	Vector1(); //konstruktor domyslny, tworzy wektor na 1 element i korzysta z konstruktora od capacity, pusty wektor
	Vector1(unsigned int capacity); // rezerwuje miejsce na podana liczbe elementow
	virtual ~Vector1(); //polimorfizm, d-tor 
	Vector1(const Vector1& old); //con-tor kopiuj?cy 

	void reserve(unsigned int capacity); // zwieksza rozmiar zarezerwowanej pamieci wektora
	void resize(unsigned int size); // pozwala zmniejszyc rozmiar wektora

	unsigned int capacity() const; //const - obiecujemy ze te metody nie zmieniaja pol
	unsigned int size() const;
	bool empty() const; // funkcja sprawdza nam size

	void insert(int value, unsigned int position); // powala wstawic wartosc do wektora na dana pozycje
	void remove(unsigned int position); //usuwa element z wektora
	void clear(); //usuwa wszytsie elementy z wektora jednak nie zmniejsza zarezerwowanej pamieci
	void push_back(int& value); //metoda push back, odklada element na kolejne wolne miejsce, referencja zeby uniknac kopiowania
	int& operator[](unsigned int i); //oprator dostepu do danych
	Vector1& operator=(const Vector1&);
private:
	unsigned _capacity;
	unsigned int _size;
	int* _data; //int* mData - notacja wegierska
};