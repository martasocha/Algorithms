// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.hpp"

Vector::Vector()
	: _size(0)
	, _capacity(0)
	, _data(nullptr)
{
}

Vector::Vector(unsigned int capacity)
	: _size(0)
	, _capacity(capacity)
{
	this->_data = new int[_capacity];
}

Vector::~Vector()
{
	if (_data != nullptr)
	{
		delete[] _data;
		_data = nullptr; //adres powinnismy ustawic na nullptr
	}
}

Vector::Vector(const Vector& old)
{
	_capacity = old._capacity;
	_size = old._size;

	_data = new int[_capacity]; // utworzy nowa pamiec dla naszego wektora
	for (unsigned int i = 0; i < old._size; ++i) //skopiuj do niej wszystko dla anszego wektora
	{
		_data[i] = old._data[i];
	}
}

void Vector::reserve(unsigned int capacity)
{
	//todo: exception if cap = 0;
	int* newTab = nullptr;
	newTab = new int[capacity];
	for (unsigned int i = 0; i < _size ; ++i)
	{
		newTab[i] = _data[i];
	}

	_capacity = capacity;
	delete[] _data;
	_data = newTab;
}

unsigned int Vector::capacity() const
{
	return _capacity;
}

unsigned int Vector::size() const
{
	return _size;
}

bool Vector::empty() const
{
	return _size == 0;
}

void Vector::insert(int value, unsigned int index)
{
	if (index > _size)
	{
		//todo: wyjatek
	}
	if (_size >= _capacity)
	{
		reserve((_capacity + 1) * 2);
	}
	
	for (unsigned int i = _size; i > index; --i)
	{
		_data[i] = _data[i - 1];
	}
	_data[index] = value;
	++_size;
}

void Vector::remove(unsigned int index)
{
	if (index > _size)
	{
		//todo: wyjatek
	}
	for (unsigned int i = index; i < _size; ++i)
	{
		_data[i] = _data[i + 1];
	}
	--_size;
}


void Vector::clear()
{
	_size = 0;
}

void Vector::push_back(const int& value)
{
	if (_size >= _capacity)
	{
		reserve((_capacity+1) * 2);
	}
	_data[_size++] = value; //push back odklada dane w miejsce dize

}

int& Vector::operator[](unsigned int position)
{
	if (position > _size)
	{
		//todo exception
	}
	return _data[position];
}

Vector& Vector::operator=(const Vector& other)
{
	delete[] _data;
	_capacity = other._capacity;
	_size = other._size;

	_data = new int[_capacity]; // utworzy nowa pamiec dla naszego wektora
	for (unsigned int i = 0; i < other._size; ++i) //skopiuj do niej wszystko dla anszego wektora
	{
		_data[i] = other._data[i];
	}

	return *this; //operator wy³uskania, this to aktualny obiekt na rzecz ktorego wywolalismy operator, wskazuemy na caly obiekt
}
 
//zwracamy wskaznik na this (zawsze operator przypisania zwraca wskaznik na this, czyli obiekt ktory zostal zmodyfikowany

