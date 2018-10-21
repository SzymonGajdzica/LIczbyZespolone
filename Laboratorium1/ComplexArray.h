#pragma once
#include "ComplexNumber.h"

class ComplexArray
{
	int x, y;
	ComplexNumber** array;
	void freeArray() const;

public:
	ComplexArray(int x, int y);
	~ComplexArray();
	void addElement(const int x, const int y, const ComplexNumber& complexNumber) const;
	void printArray() const;
	ComplexArray(ComplexArray&& object) noexcept;
	ComplexArray& operator=(ComplexArray&&) noexcept;
};

