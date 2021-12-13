#include <iostream>
#include "Complex.h"
#include "Complex.cpp"

int Counter::counter = 0;
int main()
{
	setlocale(LC_ALL, "ru");
	Complex<int> complex(1, 2);
	std::cout << complex;

	Complex<int> complex2(2, 1);
	Complex<double> complex3(2.2, 1.2);

	Complex<int> sum = complex + complex2;
	cout << sum;

	cout << "Счётчик обьектов: " << Counter::GetCounter() << endl;

	Complex complexChar('a', 'b');
	cout << complexChar;

	sum = complex + complex3;
	cout << "sum int + double = int\n" << sum << endl;
}