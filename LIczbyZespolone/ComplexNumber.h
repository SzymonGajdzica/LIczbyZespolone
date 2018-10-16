#pragma once
class ComplexNumber
{
private: 
	double im;
	double re;

public:
	ComplexNumber();
	ComplexNumber(double num);
	ComplexNumber(double re, double im);
	~ComplexNumber();
	ComplexNumber(const ComplexNumber & complexNumber);
	void setRe(double re);
	double getRe() const;
	void setIm(double im);
	double getIm() const;
};

