// LIczbyZespolone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComplexNumber.h"
#include <iostream>
#include <conio.h>

int main() {
	ComplexNumber* complexNumber = new ComplexNumber();
	complexNumber->setIm(5);
	complexNumber->setRe(6);
	std::cout << complexNumber->getIm() << std::endl;
	std::cout << complexNumber->getRe() << std::endl;
	do
	{
		std::cout << ("Press ESC to close") << std::endl;
	} while (_getch() != '\x1B');
    return 0;
}

