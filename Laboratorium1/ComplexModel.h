#pragma once
#include "ComplexNumber.h"

class ComplexModel
{

private:
	ComplexModel* next;
	ComplexNumber* complexNumber;

public:
	ComplexModel();
	~ComplexModel();
	ComplexModel* getNext() const;
	void setNext(ComplexModel* next);
	ComplexNumber* getComplexNumber() const;
	void setComplexNumber(ComplexNumber* complexNumber);
	ComplexModel(ComplexModel&& object) noexcept;
	ComplexModel& operator=(ComplexModel&&) noexcept;

};

