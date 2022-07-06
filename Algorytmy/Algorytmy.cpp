#include "Algorytmy.hpp"


Vector::Vector()
{
    this->_data = new int[0];
    this->_data[0] = '\0';
}

Vector::Vector(unsigned int capacity)
{
    this->_capacity = capacity;
    this->_data = new int[capacity];
    this->_data[capacity] = '\0';
}

Vector::~Vector()
{
    delete[] _data;
}

Vector::Vector(const Vector& old)
{
    _capacity = old._capacity;
    this->_data = new int[old._capacity];
    this->_data[old._capacity] = '\0';
}

void Vector::reserve(unsigned int capacity)
{
    _data = new int[capacity];
}

unsigned int Vector::capacity() const
{
	return 0;
}

void Vector::insert(int value, unsigned int position)
{
	int* newTab = nullptr;
	newTab = new int[_capacity + 1];
	for (unsigned int i = 0; i < _size; ++i)
	{
		if (i == position)
		{
			newTab[i] = value;
			for (unsigned int i = position; i < _size + 1; ++i)
			{
				newTab[i + 1] = _data[i];
			}
		}
	}

}

void Vector::push_back(int& value)
{
	int* newTab = nullptr;
	newTab = new int[_capacity + 1];
	for (unsigned int i = 0; i < _size + 1; ++i)
	{
		newTab[i] = _data[i];
		if (i == _size + 1)
		{
			newTab[i] = value;
		}
	}
}
