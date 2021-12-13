#include "Complexity.h"

template <class T, int m_size>
void print_buffer(Complexity <T, m_size>& Numbers)
{
	for (int i = 0; i < m_size; i++)
	{
		std::cout << Numbers.m_buffer[i] << "\n";
	}
}

template <int m_size>
void print_buffer(Complexity <int, m_size>& Numbers)
{
	for (int i = 0; i < m_size; i++)
	{
		std::cout << Numbers.m_buffer[i] << "\n";
	}
}

template<class T, int m_size>
Complexity<T, m_size>::Complexity(Complexity<T, m_size>& Complex)
{
	m_Real = Complex.m_Real;
	m_Image = Complex.m_Image;
	count++;
}

template<class T, int m_size>
Complexity<T, m_size>::Complexity(T real, T image)
{
	m_Real = real;
	m_Image = image;
	count++;
}
template<class T, int m_size>
Complexity<T, m_size>::~Complexity()
{
	count--;
}
template <class T, int m_size>
void Complexity <T, m_size>::set_real(T Real)
{
	m_Real = Real;
}

template<class T, int m_size>
void Complexity<T, m_size>::set_image(T Image)
{
	m_Image = Image;
}
template<class T, int m_size>
std::ostream& operator<<(std::ostream& out, const Complexity <T, m_size>& c)
{
	std::cout << c.m_Real;
	if (c.m_Image > 0)
		std::cout << "+i" << c.m_Image << std::endl;
	else
		std::cout << "-i" << std::abs(c.m_Image) << std::endl;
	return out;
}

template<class T, int m_size>
std::istream& operator>>(std::istream& in, Complexity<T, m_size>& c)
{
	std::cin >> c.m_Real;
	std::cin >> c.m_Image;
	return in;
}
template<class T, int m_size>
void Complexity<T, m_size>::fill_buffer()
{
	m_buffer.push_back(m_Real);
	m_buffer.push_back(m_Image);
}
template<class T, int m_size>
Complexity<T, m_size> Complexity<T, m_size>::operator+(const Complexity<T, m_size>& Sum)
{
	Complexity <T, m_size> Summ;
	Summ.m_Real = this->m_Real + Sum.m_Real;
	Summ.m_Image = this->m_Image + Sum.m_Image;
	return Summ;
}
template <class T, int m_size>
Complexity<T, m_size> Complexity<T, m_size>::operator-(const Complexity <T, m_size>& Sub)
{
	Complexity <T, m_size> Subb;
	Subb.m_Real = this->m_Real - Sub.m_Real;
	Subb.m_Image = this->m_Image - Sub.m_Image;
	return Subb;
}
template <class T, int m_size>
Complexity <T, m_size> Complexity<T, m_size>::operator*(const Complexity <T, m_size>& Mlt)
{
	Complexity <T, m_size> Mltt;
	Mltt.m_Real = this->m_Real * Mlt.m_Real;
	Mltt.m_Image = this->m_Image * Mlt.m_Image;
	return Mltt;
}

template <class T, int m_size>
Complexity <T, m_size> Complexity<T, m_size>::operator/(const Complexity <T, m_size>& Div)
{
	Complexity <T, m_size> Divv;
	Divv.m_Real = this->m_Real / Div.m_Real;
	Divv.m_Image = this->m_Image / Div.m_Image;
	return Divv;
}
template <class T, int m_size>
void Complexity <T, m_size>::output_tr()
{
	double Arg, Mdl;
	Arg = Argument_cmplx_num();
	Mdl = Modul_cmplx_num();
	std::cout << Mdl << "(cos" << Arg << " +sin" << Arg << ")";
}
template <class T, int m_size>
void Complexity <T, m_size>::output_exp()
{
	double Arg, Mdl;
	Arg = Argument_cmplx_num();
	Mdl = Modul_cmplx_num();
	std::cout << Arg << "exp(" << Mdl << ")";
}
template<class T, int m_size>
T& Complexity<T, m_size>::operator[](int m_size)
{
	return (m_buffer[m_size]);
}
template<class T, int m_size>
void Complexity<T, m_size>::display()
{
	std::cout << count << "\n";
}
template<class T, int m_size>
T Complexity<T, m_size>::get_real() const
{
	return m_Real;
}
template<class T, int m_size>
T Complexity<T, m_size>::get_image() const
{
	return m_Image;
}
template <class T, int m_size>
Complexity<T, m_size>& Complexity<T, m_size>::operator= (const Complexity<T, m_size>& Eql)
{
	m_Real = Eql.m_Real;
	m_Image = Eql.m_Image;
	return *this;
}
template<class T, int m_size>
Complexity<T, m_size>& Complexity<T, m_size>::operator++()
{
	++m_Real;
	++m_Image;
	return *this;
}
template<class T, int m_size>
Complexity<T, m_size> Complexity<T, m_size>::operator++(int)
{
	Complexity<T, m_size> temp(*this);
	m_Real++;
	m_Image++;
	return temp;
}
template<class T, int m_size>
Complexity<T, m_size>& Complexity<T, m_size>::operator--()
{
	--m_Real;
	--m_Image;
	return *this;
}
template<class T, int m_size>
Complexity<T, m_size> Complexity<T, m_size>::operator--(int)
{
	Complexity <T, m_size> temp(*this);
	--m_Real;
	--m_Image;
	return temp;
}
template<class T, int m_size>
Complexity<T, m_size>& Complexity<T, m_size>::operator+=(const Complexity<T, m_size>& rhs)
{
	m_Real += rhs.m_Real;
	m_Image += rhs.m_Image;
	return *this;
}
template<class T, int m_size>
Complexity<T, m_size>& Complexity<T, m_size>::operator-=(const Complexity<T, m_size>& rhs)
{
	m_Real -= rhs.m_Real;
	m_Image -= rhs.m_Image;
	return *this;
}
template<class T, int m_size>
bool Complexity<T, m_size>::operator==(const Complexity<T, m_size>& rhs)
{
	return ((m_Real == rhs.m_Real) && (m_Image == rhs.m_Image));
}
template<class T, int m_size>
bool Complexity<T, m_size>::operator>(const Complexity<T, m_size>& rhs)
{
	return ((m_Real > rhs.m_Real) && (m_Image > rhs.m_Image));
}
template<class T, int m_size>
bool Complexity<T, m_size>::operator<(const Complexity<T, m_size>& rhs)
{
	return ((m_Real < rhs.m_Real) && (m_Image < rhs.m_Image));
}
template <class T, int m_size>
T Complexity <T, m_size>::Argument_cmplx_num()
{
	return (atan(m_Image / m_Real) * 180.0 / PI);
}
template <class T, int m_size>
T Complexity <T, m_size>::Modul_cmplx_num()
{
	return (sqrt(pow(m_Real, 2) + pow(m_Image, 2)));
}
template <class T, int m_size>
T Complexity<T, m_size>::count = 0;