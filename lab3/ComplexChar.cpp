#include "Complex.h"

Complex<char>::Complex(char real, char img) : Complex()
{
	this->real = real;
	this->img = img;
}

Complex<char>::Complex()
{
	counter++;
}

Complex<char>::Complex(Complex& x)
{
	this->real = x.real;
	this->img = x.img;
}

char Complex<char>::getReal() const
{
	return real;
}

void Complex<char>::setReal(char real)
{
	this->real = real;
}

char Complex<char>::getImg() const
{
	return img;
}

void Complex<char>::setImg(char img)
{
	this->img = img;
}

Complex<char>& Complex<char>::operator=(Complex<char>& x)
{
	this->real = x.real;
	this->img = x.img;

	return *this;
}

Complex<char> Complex<char>::operator+(Complex<char>& x)
{
	return Complex(this->real + x.real, this->img + x.img);
}

ostream& operator<<(ostream& cout, Complex<char>& x)
{
	cout << "Комплексное число char: " << x.real << " + j" << x.img << endl;
	return cout;
}

istream& operator>>(istream& cin, Complex<char>& x)
{
	cout << "Введите действительное число";
	cin >> x.real;

	cout << "Введите мнимое число";
	cin >> x.img;

	return cin;
}