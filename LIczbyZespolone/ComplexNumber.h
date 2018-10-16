#pragma once
class ComplexNumber
{
private: 
	double im;
	double re;

public:
	ComplexNumber();
	~ComplexNumber();
	void setRe(double re);
	double getRe() const;
	void setIm(double im);
	double getIm() const;
};

