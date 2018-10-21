#include "pch.h"
#include "ComplexArray.h"
#include  <iostream>

ComplexArray::ComplexArray(const int x, const int y): x(x), y(y)
{
	array = new ComplexNumber*[x];
	for (auto i = 0; i < x; ++i)
		array[i] = new ComplexNumber[y];
}


ComplexArray::~ComplexArray()
{
	freeArray();
}

void ComplexArray::freeArray() const
{
	for (auto i = 0; i < x; ++i)
	{
		delete[] array[i];
	}
	delete[] array;
}

void ComplexArray::addElement(const int x, const int y, const ComplexNumber& complexNumber) const
{
	if(x < this->x && y < this->y)
	{
		array[x][y] = complexNumber;
	} else
	{
		std::cout << "x=" << x << " y=" << y << " Out of bounds" << std::endl;
	}
}

void ComplexArray::printArray() const
{
	for(auto i = 0; i < x; i++)
	{
		for(auto j = 0; j < y; j++)
		{
			std::cout << "x=" << i << " y=" << j << " im=" << array[i][j].getIm() << " re= " << array[i][j].getRe() << std::endl;
		}
	}
}

ComplexArray::ComplexArray(ComplexArray && object) noexcept: x(0), y(0), array(nullptr)
{
	array = object.array;
	x = object.x;
	y = object.y;
	object.array = nullptr;
	object.x = 0;
	object.y = 0;
}

ComplexArray & ComplexArray::operator= (ComplexArray &&object) noexcept
{
	if (this != &object)
	{
		freeArray();

		array = object.array;
		x = object.x;
		y = object.y;

		object.array = nullptr;
		object.x = 0;
		object.y = 0;
	}
	return *this;
}


