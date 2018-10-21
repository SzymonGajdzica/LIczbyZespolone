#pragma once
#include "ComplexModel.h"

class ComplexList
{
protected:
	ComplexModel* guard;

public:
	ComplexList();
	~ComplexList();
	void addFront(ComplexNumber* complexNumber) const;
	void add_(ComplexNumber* complexNumber) const;
	void add(ComplexNumber* complexNumber, const int position) const;
	void displayList() const;
	void remove() const;
	void remove(int position) const;
	void removeFront() const;
	void clearList() const;
	ComplexNumber* getLast() const;
	ComplexNumber* get(const int position) const;

};

