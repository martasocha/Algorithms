#include <iostream>
#include "Vector.hpp"

int main()
{
	Vector test(10);

	std::cout << "cap = " << test.capacity() << std::endl;
	std::cout << "size = " << test.size() << std::endl;
	std::cout << "empty= " << test.empty() << std::endl;

	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	std::cout << "cap = " << test.capacity() << std::endl;
	std::cout << "size = " << test.size() << std::endl;
	std::cout << "empty= " << test.empty() << std::endl;

	for (int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "Wstawiam " << std::endl;
	test.insert(66, 3);

	for (int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "Usuwam " << std::endl;
	test.remove(3);

	for (int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	//std::cout << "Vector other: " << std::endl;
	//Vector other(3);
	//other.push_back(1);
	//other.push_back(2);
	//other.push_back(3);

	//for (int i = 0; i < other.size(); ++i)
	//{
	//	std::cout << "[" << i << "]= " << test[i] << std::endl;
	//}

	//std::cout << "Kopiuje do " << std::endl;

	//test.copyTo(other, 2);
	//for (int i = 0; i < test.size(); ++i)
	//{
	//	std::cout << "[" << i << "]= " << test[i] << std::endl;
	//}

	std::cout << "Vector other 2: " << std::endl;
	Vector other2(5);
	other2.push_back(1);
	other2.push_back(2);
	other2.push_back(3);
	other2.push_back(4);
	other2.push_back(5);

	for (int i = 0; i < other2.size(); ++i)
	{
		std::cout << "[" << i << "]= " << other2[i] << std::endl;
	}

	std::cout << "Kopiuje do " << std::endl;

	test.copyTo(other2, 2);
	for (int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "Usuwam " << std::endl;
	test.remove(2,6);

	for (int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "Magia: " << test.operator[](2) << " to jest to samo co: " << test[2]; //operatory to funkcje
}