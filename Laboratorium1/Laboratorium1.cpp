#include "pch.h"
#include "ComplexNumber.h"
#include <iostream>
#include <conio.h>
#include "ComplexArray.h"
#include "ComplexList.h"
#include <list>
#include "ComplexStack.h"

int ComplexNumber::numberOfAllocations = 0;

int main() 
{
	auto complexNumber = new ComplexNumber();
	complexNumber->setIm(5);
	complexNumber->setRe(6);
	auto complexNumber2 = new ComplexNumber(*complexNumber);
	complexNumber2->setIm(23);
	complexNumber->setRe(62);
	std::cout << complexNumber->getIm() << std::endl;
	std::cout << complexNumber->getRe() << std::endl;
	std::cout << complexNumber2->getIm() << std::endl;
	std::cout << complexNumber2->getRe() << std::endl;
	auto complexHolder = new ComplexArray(6, 7);
	complexHolder->addElement(3, 6, *complexNumber);
	complexHolder->addElement(2, 5, *complexNumber2);
	complexHolder->printArray();
	std::cout << "------------------------" << std::endl;
	auto val = complexHolder;
	auto val2 = std::move(val);
	val->addElement(5, 2, *complexNumber);
	val->addElement(5, 5, *complexNumber2);
	std::cout << "------------------------" << std::endl;
	val2->printArray();
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;

	const auto complexList = new ComplexList();
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->add_(complexNumber);
	complexList->add_(complexNumber2);
	complexList->removeFront();
	complexList->remove();
	complexList->remove(5);
	complexList->displayList();

	const auto complexStack = new ComplexStack();

	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	complexStack->add(complexNumber);
	complexStack->add(complexNumber2);
	const auto number1 = complexStack->get();
	const auto number2 = complexStack->get();
	complexStack->display();
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << number1->getIm() << std::endl;
	std::cout << number2->getIm() << std::endl;
	complexStack->clear();
	const auto number3 = complexStack->get();
	if(number3 == nullptr)
	{
		std::cout << "NULL" << std::endl;
	}

	std::cout << "numberOfAllocations = " << ComplexNumber::numberOfAllocations << std::endl;

	delete(complexNumber);
	delete(complexNumber2);
	delete(complexHolder);
	delete(complexList);
	delete(complexStack);
	std::cout << "numberOfAllocations = " << ComplexNumber::numberOfAllocations << std::endl;
	do
	{
		std::cout << ("Press ESC to close") << std::endl;
	} while (_getch() != '\x1B');
	return 0;
}
