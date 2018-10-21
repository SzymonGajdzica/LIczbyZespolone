#include "pch.h"
#include "ComplexStack.h"


ComplexStack::ComplexStack()
{
	
}


ComplexStack::~ComplexStack()
{
}

void ComplexStack::add(ComplexNumber* complexNumber) const
{
	this->add_(complexNumber);
}

ComplexNumber* ComplexStack::get() const
{
	const auto tmp = getLast();
	remove();
	return tmp;
}

void ComplexStack::display() const
{
	displayList();
}

void ComplexStack::clear() const
{
	clearList();
}
