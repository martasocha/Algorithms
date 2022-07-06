#pragma once
class Vector
{

public:
	Vector(); //konstruktor domyslny, tworzy wektor na 1 element i korzysta z konstruktora od capacity, pusty wektor
	Vector(unsigned int capacity); // rezerwuje miejsce na podana liczbe elementow
	virtual ~Vector(); //polimorfizm, d-tor 
	Vector(const Vector& old); //con-tor kopiuj¹cy 

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
	Vector& operator=(const Vector&);
private:
	unsigned _capacity;
	unsigned int _size;
	int* _data; //int* mData - notacja wegierska
};