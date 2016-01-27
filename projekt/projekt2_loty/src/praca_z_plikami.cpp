#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
#include "implementacja.h"

string czytaj_plik(ifstream *wsk_plik_wej)
{
	string linia;
	getline(*wsk_plik_wej, linia);
	return linia;
}


void tworzenie_plikow(lot *glowa)
{
	ofstream plik_wyj;
	while (glowa)       //dopoki istnieje lista
	{
		plik_wyj.open((glowa->symbol) + ".txt");  // tworzy plik wyjsciowy z nazwa symbolu lotu
		ofstream *wsk_plik_wyj = &plik_wyj;        // tworze wskaznik na plik wyj zeby sie do niego odniesc w funkcji wypisywania drzewa
		plik_wyj << "symbol lotu: " << glowa->symbol << "\nlotnisko:    " << glowa->lotnisko << "\ndata lotu:   " << glowa->data << "\n\nlista pasazerow:\n";
		wypisz_drzewo(glowa->korzen_drzewa, wsk_plik_wyj);
		plik_wyj << "\nLiczba rezerwacji: " << glowa->licznik;
		plik_wyj.close();
		usuwanie(glowa->korzen_drzewa);        // usuwamy drzewo podwieszone do biezacego lotu (biezacej komorki listy)
		lot *do_usuniecia = glowa->nastepny;   // przesuwamy wskaznik na nastepna komorke
		delete glowa;                          // ususwamu biezacy lot (komorke listy)
		glowa = do_usuniecia;
	}
}