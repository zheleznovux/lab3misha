#ifndef COMPLEXITY_H
#define  COMPLEXITY_H
#include <iostream>
#include <cmath>
#include <vector>

constexpr auto PI = 3.14159265;
template <class T, int m_size>
class Complexity
{
private:
	static T count;
	T m_Real;
	std::vector<T> m_buffer;
	T m_Image;
public:
	Complexity(Complexity<T, m_size>& Complex);
	Complexity(T real = 0, T image = 0);
	~Complexity();
	void set_real(T real);
	void set_image(T image);
	void output_tr();
	void output_exp();
	static void display();
	T get_real() const;
	T get_image() const;
	template <class T, int m_size>friend std::ostream& operator << (std::ostream& out, const Complexity <T, m_size>& c);
	template <class T, int m_size>friend std::istream& operator >> (std::istream& in, Complexity <T, m_size>& c);
	template <class T, int m_size> friend void print_buffer(Complexity <T, m_size>&);
	template <int m_size> friend void print_buffer(Complexity <int, m_size>&);
	void fill_buffer();
	Complexity <T, m_size> operator + (const Complexity <T, m_size>&);
	Complexity <T, m_size> operator - (const Complexity <T, m_size>&);
	Complexity <T, m_size> operator * (const Complexity <T, m_size>&);
	Complexity <T, m_size> operator / (const Complexity <T, m_size>&);
	Complexity <T, m_size>& operator = (const Complexity <T, m_size>&);
	Complexity <T, m_size>& operator++ (); //prefix incremention
	Complexity <T, m_size> operator++ (int);//postfix incremention
	Complexity <T, m_size>& operator--();
	Complexity <T, m_size> operator--(int);//исправить
	Complexity <T, m_size>& operator += (const Complexity&);
	Complexity <T, m_size>& operator -= (const Complexity&);
	bool operator == (const Complexity <T, m_size>&);
	bool operator > (const Complexity <T, m_size>&);
	bool operator < (const Complexity <T, m_size>&);
	T& operator [] (int m_size);
	T Argument_cmplx_num();
	T Modul_cmplx_num();
};

#endif
