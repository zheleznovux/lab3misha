#define COMPLEX_H

#pragma once
#include <iostream>

using namespace std;

class Counter
{
protected:
	static int counter;
public:
	static int GetCounter() {
		return counter;
	}
};

template<typename T>
class Complex : public Counter
{
	T real;
	T img;
public:
	Complex(T real, T img);
	Complex();
	Complex(Complex<T>& x);
	template<typename V>
	Complex(const Complex<V>& x) : Complex()
	{
		this->real = static_cast<T>(x.getReal());
		this->img = static_cast<T>(x.getImg());
	}

	~Complex() {};

	T	 getReal() const;
	void setReal(T real);
	T	 getImg() const;
	void setImg(T img);

	friend ostream& operator<<<T>(ostream&, Complex<T>&);
	friend istream& operator>><T>(istream&, Complex<T>&);

	Complex<T>& operator=(const Complex<T>&);
	Complex<T> operator+(const Complex<T>&);
};

template<>
class Complex<char> : public Counter
{
	char real;
	char img;
public:
	Complex(char real, char img);
	Complex();
	template<typename V>
	Complex(const Complex<V>& x) : Complex()
	{
		this->real = static_cast<char>(x.getReal());
		this->img = static_cast<char>(x.getImg());
	}
	Complex(Complex& x);

	char getReal() const;
	void setReal(char real);
	char getImg() const;
	void setImg(char img);

	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);

	Complex& operator=(Complex&);
	Complex operator+(Complex&);
};
