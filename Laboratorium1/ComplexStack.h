#pragma once
#include "ComplexList.h"
class ComplexStack :
	protected ComplexList
{
public:
	ComplexStack();
	~ComplexStack();
	void add(ComplexNumber* complexNumber) const;
	ComplexNumber* get() const;
	void display() const;
	void clear() const;
};

