#pragma once
class ComplexNumber
{
private:
	double im;
	double re;

public:
	static int numberOfAllocations;
	ComplexNumber();
	explicit ComplexNumber(double num);
	ComplexNumber(double re, double im);
	ComplexNumber(const ComplexNumber & complexNumber);
	~ComplexNumber();
	void setRe(double re);
	double getRe() const;
	void setIm(double im);
	double getIm() const;
};

