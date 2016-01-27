#include "wskazniki.h"
#include <fstream>
#include <iostream>

using namespace std;

void Filtruj(const std::string& file_name)
{
	ifstream plik;
	plik.open("osoby.txt");
	if (!plik)
	{
		std::cout << "blad" << endl;
		return;
	}

	string imie;
	int wiek;
	Person tab[5];
	int odczytano = 0;
	while (plik >> imie >> wiek)
	{
		tab[odczytano].imie = imie;
		tab[odczytano].wiek = wiek;
		//tab[odczytano++] = Person{ imie, wiek };
		++odczytano;
		
	}

	for (int i = 0; i < odczytano; ++i)
		cout << tab[i].imie << "\n";

	int srednia;
	for (int i = 0; i < odczytano; i++)
		srednia = srednia + tab[odczytano].wiek;
	srednia = srednia / odczytano;

	for (int i = 0; i < odczytano; ++i)
	{
		if (tab[odczytano].wiek < srednia)
		cout << tab[i].imie << "\n";

	}
}