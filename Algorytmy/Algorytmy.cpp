#include "Algorytmy.hpp"


Vector1::Vector1()
{
	this->_capacity = 0;
	this->_size = 0;
	this->_data = nullptr;
}

Vector1::Vector1(unsigned int capacity)
{
    this->_capacity = capacity;
    this->_data = new int[capacity];
    this->_data[capacity] = '\0';
}

Vector1::~Vector1()
{
    delete[] _data;
}

Vector1::Vector1(const Vector1& old)
{
    _capacity = old._capacity;
	_size = old._size;
    this->_data = new int[old._capacity];
    this->_data[old._capacity] = '\0';
}

void Vector1::reserve(unsigned int capacity)
{
    _data = new int[capacity];
}

unsigned int Vector1::capacity() const
{
	return 0;
}

void Vector1::insert(int value, unsigned int position)
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

void Vector1::push_back(int& value)
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

int& Vector1::operator[](unsigned int i)
{
	Vector result;

}

Fraction operator * (const Fraction& another) {
	Fraction result;
	result.numerator = this->numerator * another.numerator;
	result.denominator = this->denominator * another.denominator;
	return result

Vector& Vector::operator=(const Vector& another)
{
	// // O: insert return statement here
	this->_capacity = another._capacity;
	this->_size = another._size;
	this->_data = another._data;
	return *this;
}
