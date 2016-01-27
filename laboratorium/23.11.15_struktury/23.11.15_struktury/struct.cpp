#include<iostream>
#include<cmath>
#include "head.h"
using namespace std;

void wypisz(Complex z)
{
	cout << "z = " << z.re << " + " << z.im << "i"<<endl;
	return;
}

Complex liczba(float x, float y)
{
	Complex z;
	z.re = x;
	z.im = y;
	return z;
}

Complex dodaj(Complex x, Complex y)
{
	Complex z;
	z.re = x.re + y.re;
	z.im = x.im + y.im;
	return z;
}

Complex compare_modul(Complex x, Complex y)
{
	float modul_x = sqrt(x.re*x.re + x.im*x.im);
	float modul_y = sqrt(y.re*y.re + y.im*y.im);
	if (modul_x == modul_y)
		cout << "moduly rowne" << endl;
	else if (modul_x > modul_y)
	{
		cout << "modul pierwszej wiekszy" << endl;
		return x;
	}
	else
	{
		cout << "modul drugiej wiekszy" << endl;
		return y;
	}
}