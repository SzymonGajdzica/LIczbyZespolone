#include "pch.h"
#include "ComplexModel.h"


ComplexModel::ComplexModel(): next(nullptr), complexNumber(nullptr)
{
}

ComplexModel::~ComplexModel()
= default;

ComplexModel* ComplexModel::getNext() const
{
	return next;
}

void ComplexModel::setNext(ComplexModel* next)
{
	this->next = next;
}

ComplexNumber* ComplexModel::getComplexNumber() const
{
	return complexNumber;
}

void ComplexModel::setComplexNumber(ComplexNumber* complexNumber)
{
	this->complexNumber = complexNumber;
}

ComplexModel::ComplexModel(ComplexModel && object) noexcept : next(nullptr), complexNumber(nullptr)
{
	next = object.next;
	complexNumber = object.complexNumber;
	object.next = nullptr;
	object.complexNumber = nullptr;
}

ComplexModel & ComplexModel::operator= (ComplexModel &&object) noexcept
{
	if (this != &object)
	{
		delete(complexNumber);
		delete(next);

		complexNumber = object.complexNumber;
		next = object.next;

		object.complexNumber = nullptr;
		object.next = nullptr;
	}
	return *this;
}
