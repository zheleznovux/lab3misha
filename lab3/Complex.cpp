#include "Complex.h"
using namespace std;

template<typename T>
Complex<T>::Complex(T real, T img) : Complex()
{
	this->real = real;
	this->img  = img;
}

template<typename T>
Complex<T>::Complex()
{
	counter++;
}

template<typename T>
Complex<T>::Complex(Complex& x)
{
	this->real = x.real;
	this->img = x.img;
}

//template<typename T>
//template<typename V>
//Complex<T>::Complex(const Complex<V>& x) : Complex()
//{
//	this->real = static_cast<T>(x.real);
//	this->img  = static_cast<T>(x.img);
//}
//
//template<typename V>
//Complex<char>::Complex(const Complex<V>& x) : Complex()
//{
//	this->real = static_cast<char>(x.real);
//	this->img = static_cast<char>(x.img);
//}
//
//template<typename T>
//template<typename V>
//Complex<T>::Complex(const Complex<V> x) : Complex()
//{
//	this->real = static_cast<T>(x.real);
//	this->img = static_cast<T>(x.img);
//}

template<typename T>
T Complex<T>::getReal() const
{
	return real;
}

template<typename T>
void Complex<T>::setReal(T real)
{
	this->real = real;
}

template<typename T>
T Complex<T>::getImg() const
{
	return img;
}

template<typename T>
void Complex<T>::setImg(T img)
{
	this->img = img;
}

template<typename T>
Complex<T>& Complex<T>::operator=(const Complex<T>& x)
{
	this->real = x.real;
	this->img = x.img;

	return *this;
}

template<typename T>
Complex<T> Complex<T>::operator+(const Complex<T>& x)
{
	return Complex<T>(this->real + x.real, this->img + x.img);
}

template<typename T>
ostream& operator<<(ostream& cout, Complex<T>& x)
{
	cout << "Комплексное число: " << x.real << " + j*" << x.img << endl;
	return cout;
}

template<typename T>
istream& operator>>(istream& cin, Complex<T>& x)
{
	cout << "Введите действительное число: ";
	cin >> x.real;

	cout << "Введите мнимое число: ";
	cin >> x.img;

	return cin;
}
