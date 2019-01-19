#include "pch.h"
#include "LiczbaZespolona.h"


LiczbaZespolona::LiczbaZespolona()
{
}

LiczbaZespolona::LiczbaZespolona(int a, int b):re(a),im(b)
{
}


LiczbaZespolona::~LiczbaZespolona()
{
}

void LiczbaZespolona::wypisz()
{
	 
	cout << re;
	if (im < 0)
		cout << " - ";
	else
		cout << " + ";
	cout << im << "i" << endl;
}

int LiczbaZespolona::get_re() const
{
	return re;
}

int LiczbaZespolona::get_im() const
{
	return im;
}

LiczbaZespolona LiczbaZespolona::operator+(LiczbaZespolona a)
{
	return LiczbaZespolona( re + a.get_re(),im + a.get_im());
}

LiczbaZespolona LiczbaZespolona::operator-(LiczbaZespolona)
{
	return LiczbaZespolona(re - a.get_re(), im - a.get_im());
}

LiczbaZespolona & LiczbaZespolona::operator=(LiczbaZespolona a)
{
	if (&a != this)
	{
		re = a.get_re();
		im = a.get_im();
	}
	return *this;
	
}

ostream & operator<<(ostream & out, const LiczbaZespolona a)
{
	out << a.get_re();
	if (a.get_im() < 0)
		out << " ";
	else
		out << " + ";
	out << a.get_im() << "i" << endl;
	return out;
}
