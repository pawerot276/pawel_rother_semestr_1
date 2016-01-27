#include<iostream>
#include<cmath>
#include"head.h"

using namespace std;

int main(int argc, char**argv)
{
	Complex c = { 1,2 };
	wypisz (c);
	
	c = liczba(5, 2);
	wypisz(c);

	wypisz(liczba(5, 2));

	wypisz(dodaj(c, c));

	wypisz(dodaj(liczba(2, 1), c));

	compare_modul(liczba(1, 2), liczba(2, 1));

	return 0;
}