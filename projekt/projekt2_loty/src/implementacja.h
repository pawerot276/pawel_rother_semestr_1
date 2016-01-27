#pragma once

struct osoba
{
	string nazwisko;
	int numer_miejsca;
	osoba*lewy;
	osoba*prawy;
}; 

struct lot
{
	string symbol;
	string lotnisko;
	string data;
	int licznik;
	lot*nastepny;
	osoba*korzen_drzewa;
};

string czytaj_plik(ifstream *wsk_plik_wej);

void dopisz_do_drzewa(osoba*&rodzic, osoba* nowa);   // dopisuje synow do rodzica

void nowa_osoba(osoba**rodzic, stringstream &wiersz);  //tworzy nowy wezel drzewa

void wypisz_drzewo(osoba*rodzic, ofstream *wsk_plik_wyj);   // przekazuje numer miejsca i nazwisko do pliku wyjsciowego

void usuwanie(osoba*rodzic);    // usuwa jeden wezel drzewa

void nowy_lot(lot**glowa, ifstream *wsk_plik_wej);   //tworzy nowa komorke listy

void tworzenie_plikow(lot *glowa);     // tworzy pliki wyjsciowe z danymi lotu oraz lista pasazerow i usuwa komorki listy