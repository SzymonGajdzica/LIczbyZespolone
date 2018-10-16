// LIczbyZespolone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComplexNumber.h"
#include <iostream>
#include <conio.h>

int main() {
	auto complexNumber = new ComplexNumber();
	complexNumber->setIm(5);
	complexNumber->setRe(6);
	auto complexNumber2 = new ComplexNumber(*complexNumber);
	complexNumber2->setRe(62);
	complexNumber->setIm(23);
	std::cout << complexNumber->getIm() << std::endl;
	std::cout << complexNumber->getRe() << std::endl;
	std::cout << complexNumber2->getIm() << std::endl;
	std::cout << complexNumber2->getRe() << std::endl;
	do
	{
		std::cout << ("Press ESC to close") << std::endl;
	} while (_getch() != '\x1B');
	delete(complexNumber);
	delete(complexNumber2);
    return 0;
}

