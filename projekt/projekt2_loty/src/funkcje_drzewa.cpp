#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
#include "implementacja.h"

void dopisz_do_drzewa(osoba*&rodzic, osoba* nowa)
{
	if (rodzic == nullptr)
		rodzic = nowa;    // jezeli drzewo jest puste to nowy wezel staje sie rodzicem i zarazem korzeniem drzewa
	else if (nowa->numer_miejsca < rodzic->numer_miejsca)  // jezeli numer miejsca lotu nowej osoby jest mniejszy 
		dopisz_do_drzewa(rodzic->lewy, nowa);			   // niz rodzica->to dopisze na lewo, 
	else												   // jezeli wiekszy->dopsize na prawo
		dopisz_do_drzewa(rodzic->prawy, nowa);
}

void nowa_osoba(osoba**rodzic, stringstream &wiersz)
{
	osoba*nowa = new osoba;
	wiersz >> nowa->nazwisko >> nowa->numer_miejsca;

	wiersz.sync(); //czysci flagi np konca linii
	wiersz.clear();

	nowa->lewy = nullptr;
	nowa->prawy = nullptr;
	dopisz_do_drzewa(*rodzic, nowa);

}

void wypisz_drzewo(osoba*rodzic, ofstream *wsk_plik_wyj)
{
	if (!rodzic)
		return;
	wypisz_drzewo(rodzic->lewy, wsk_plik_wyj);   // zaczynamy od najmniejszego (najbardziej na lewo syna)
	*wsk_plik_wyj << rodzic->numer_miejsca << "  ";
	*wsk_plik_wyj << rodzic->nazwisko << "  \n";
	wypisz_drzewo(rodzic->prawy, wsk_plik_wyj);

}

void usuwanie(osoba*rodzic)
{
	if (!rodzic)
		return;
	usuwanie(rodzic->lewy);  // usuwanie lewego syna
	usuwanie(rodzic->prawy); // usuwanie prawego syna
	delete rodzic;           // usuwanie rodzica
	rodzic = nullptr;
}