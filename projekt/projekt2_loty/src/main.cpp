#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#define blad_plik "Plik nie zostal otwarty poprawnie. Program sie nie wykonal. \n\n"
#define blad "Nieprawidlowy parametr lub nieprawidlowa sciezka pliku zrodlowego. Program sie nie wykonal. \n\n"
#define pusty_plik "Plik jest pusty. Program sie nie wykonal."
#define pomoc "Aby poprawnie uruchomic program nalezy w linii polecen napisac nastepujaca komende:\n\nprogram.exe -i plik_zrodlowy.txt\n\ngdzie:\nprogram.exe        jest to sciezka programu z rozszerzeniem *.exe\nplik_zrodlowy.txt  jest to sciezka pliku, w ktorym jest przechowana lista rezerwacji lotow z rozszerzeniem *.txt\n\n"
#define wprowadzenie "\n\nProgram sluzy do porzadkowania rezerwacji lotow.\nPo skonczonej pracy w katalogu zrodlowym,\nw ktorym znajduje sie program, zostana utworzone pliki tekstowe z listami osob,\nktore zarezerwowaly bilety na dany lot.\n\n"
using namespace std;
#include "implementacja.h"

int main(int argc, char*argv[])

{
	cout << wprowadzenie;
	string nazwa_pliku_wej;
	if (argc == 3)
	{
		nazwa_pliku_wej = argv[2];
	}
	lot * glowa = nullptr;

	if (argc == 3 && argv[1][0] == '-'&&argv[1][1] == 'i'&&!argv[1][2]
		&& /* 1 */ nazwa_pliku_wej.substr(nazwa_pliku_wej.find_last_of('.') + 1) == "txt")

		//1: warunek, ¿e rozszerzenie pliku ma wartoœæ "txt" (podci¹g nazwy brany od ostatniej kropki +1)
	{
		ifstream plik_wej;
		ifstream *wsk_plik_wej = &plik_wej;   // tworzymy wskaznik na plik wejsciowy zeby moc sie odwolac do tego pliku w funkcji nowy_lot
		plik_wej.open(nazwa_pliku_wej);

		if (!plik_wej.is_open())
			cout << blad_plik << pomoc;

		else   //gdy wszystko dobrze
		{
			plik_wej.seekg(0, ios::end);		   // ustawia wewnetrzny wskaznik pliku na sam koniec
			if (plik_wej.tellg())					   // Sprawdza czy plik nie jest pusty (czy cos jest przed wskaznikiem)
			{
				plik_wej.seekg(0);					   // ustawia wewnetrzny wskaznik pliku na poczatek
				while (plik_wej.eof() != 1)
					nowy_lot(&glowa, wsk_plik_wej);   // tworzy nowy lot dopoki nie dojdzie do konca pliku
			}
			else
				cout << pusty_plik;
		}
	}
	else //gdy zle wprowadzony parametr
		cout << blad << pomoc;

	tworzenie_plikow(glowa);

	return 0;
}