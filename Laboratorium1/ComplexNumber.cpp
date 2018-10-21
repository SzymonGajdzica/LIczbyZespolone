#include "pch.h"
#include "ComplexNumber.h"
#include <iostream>

ComplexNumber::ComplexNumber(): im(0), re(0)
{
	ComplexNumber::numberOfAllocations++;
}

ComplexNumber::~ComplexNumber()
{
	ComplexNumber::numberOfAllocations--;
}

ComplexNumber::ComplexNumber(const double num): im(num), re(num)
{
	ComplexNumber::numberOfAllocations++;
}

ComplexNumber::ComplexNumber(const double re, const double im): im(im), re(re)
{
	ComplexNumber::numberOfAllocations++;
}

ComplexNumber::ComplexNumber(const ComplexNumber & complexNumber): im(complexNumber.im), re(complexNumber.re)
{
	ComplexNumber::numberOfAllocations++;
	std::cout << "copy constructor has been called" << std::endl;
}

void ComplexNumber::setRe(const double re)
{
	this->re = re;
}
double ComplexNumber::getRe() const
{
	return re;
}
void ComplexNumber::setIm(const double im)
{
	this->im = im;
}
double ComplexNumber::getIm() const
{
	return im;
}
