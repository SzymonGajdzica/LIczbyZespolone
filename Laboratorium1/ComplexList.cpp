#include "pch.h"
#include "ComplexList.h"
#include "ComplexModel.h"
#include <iostream>

ComplexList::ComplexList()
{
	guard = new ComplexModel();
	guard->setComplexNumber(nullptr);
}


ComplexList::~ComplexList()
{
	clearList();
	delete(guard);
}

void ComplexList::addFront(ComplexNumber* complexNumber) const 
{
	auto *newNode = new ComplexModel();
	newNode->setComplexNumber(complexNumber);
	newNode->setNext(guard->getNext());
	guard->setNext(newNode);
}

void ComplexList::add_(ComplexNumber* complexNumber) const
{
	auto tmp = guard;
	while (tmp->getNext() != nullptr)
		tmp = tmp->getNext();
	auto * newNode = new ComplexModel();
	newNode->setComplexNumber(complexNumber);
	tmp->setNext(newNode);
}

void ComplexList::add(ComplexNumber* complexNumber, const int position) const
{
	auto tmp = guard;
	auto * newNode = new ComplexModel();
	newNode->setComplexNumber(complexNumber);
	auto i = 0;
	while (tmp->getNext() != nullptr && i < position) {
		tmp = tmp->getNext();
		i++;
	}
	newNode->setNext(tmp->getNext());
	tmp->setNext(newNode);
}

void ComplexList::displayList() const
{
	auto tmp = guard;
	while (tmp->getNext() != nullptr) {
		tmp = tmp->getNext();
		const auto complex = tmp->getComplexNumber();
		std::cout << "Re=" << complex->getRe() << " Im=" << complex->getIm() << std::endl;
	}
	std::cout << std::endl;
}

void ComplexList::remove() const
{
	if (guard->getNext() != nullptr)
	{
		auto tmp = guard;
		while (tmp->getNext()->getNext() != nullptr) {
			tmp = tmp->getNext();
		}
		if (tmp != guard)
			delete(tmp->getNext());
		tmp->setNext(nullptr);
	}
}

void ComplexList::remove(const int position) const
{
	auto tmp = guard;
	auto tmp2 = guard;
	auto i = 0;
	while (tmp->getNext() != nullptr && i < position) {
		tmp = tmp->getNext();
		i++;
	}
	if (tmp != guard)
	{
		tmp2 = tmp->getNext()->getNext();
		delete(tmp->getNext());
		tmp->setNext(tmp2);
	}
}

void ComplexList::removeFront() const
{
	if(guard -> getNext() != nullptr)
	{
		const auto tmp = guard->getNext()->getNext();
		delete(guard->getNext());
		guard->setNext(tmp);
	}
}

void ComplexList::clearList() const
{
	auto tmp = guard;
	tmp = tmp->getNext();
	while (tmp != nullptr) {
		const auto tmp2 = tmp;
		tmp = tmp->getNext();
		delete(tmp2);
	}
	guard->setNext(nullptr);
}

ComplexNumber* ComplexList::getLast() const
{
	auto tmp = guard;
	while (tmp->getNext() != nullptr)
		tmp = tmp->getNext();
	return tmp->getComplexNumber();
}

ComplexNumber* ComplexList::get(const int position) const
{
	auto tmp = guard;
	auto i = 0;
	while (tmp->getNext() != nullptr && i < position) {
		tmp = tmp->getNext();
		i++;
	}
	return tmp->getComplexNumber();
}
