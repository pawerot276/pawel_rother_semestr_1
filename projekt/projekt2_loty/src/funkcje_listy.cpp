#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
#include "implementacja.h"

void nowy_lot(lot**glowa, ifstream *wsk_plik_wej)
{
	lot *nowy = new lot;  //nowa komorka listy

	string tymczasowy;
	stringstream wiersz;
	string linia = czytaj_plik(wsk_plik_wej);

	if (linia=="")  //gdy wykryto pusta linie
		return;

	wiersz << linia;
	wiersz >> nowy->symbol >> nowy->lotnisko >> nowy->data ;
	//1 linia : kazdy "wyraz" wysylany do kolejnej zmiennej, 2 ostatnie zostaja by moc je przeslac do komorki z osoba
	
	nowy->nastepny = nullptr;
	nowy->korzen_drzewa = nullptr;

	lot *temp = *glowa;    // wskaznik na bierzacy porownywany element
	lot *temp1 = nullptr;   // wskaznik na poprzednika
	lot *kopia = nullptr;

	while (temp != nullptr)                       //sprawdzamy cala liste
	{
		if (temp->symbol == nowy->symbol)         //jezeli taki lot juz jest wpisany w liste to kopia wskazuje na ten biezacy element a petla leci dalej
		{
			kopia = temp;
			temp->licznik++;
		}
		temp1 = temp;               // przesuwamy wskazniki na kolejne elementy listy
		temp = temp->nastepny;
	}
	if (*glowa == nullptr)						   // sprawdzamy czy lista jest pusta i nowy element listy dolaczamy jako glowa
	{
		nowy->nastepny = nullptr;                  // null bo nie ma nic dalej na liscie
		nowy->licznik = 1;
		*glowa = nowy;
		nowa_osoba(&nowy->korzen_drzewa, wiersz);
	}
	else if (kopia == nullptr)				       // jezeli jeszcze nie ma takiego lotu na liscie - dopisywanie na koniec listy
	{
		temp1->nastepny = nowy;
		nowy->nastepny = nullptr;
		nowy->licznik = 1;
		nowa_osoba(&nowy->korzen_drzewa, wiersz);
	}
	else										   // jezeli taki lot ju¿ jest na liœcie , uzupelnianie drzewa nastepna osoba, i usuwanie duplikatu lotu
	{
		nowa_osoba(&kopia->korzen_drzewa, wiersz);
		delete nowy;
	}
}