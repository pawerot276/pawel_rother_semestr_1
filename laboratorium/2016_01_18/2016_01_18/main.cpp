#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct lolek
{
	int wiek;
	string imie;

	lolek*nastepny;
};

void Dodaj_na_poczatek(lolek*&glowa, int wiek, const string& imie)
{
	glowa = new lolek{ wiek, imie, glowa };
}

void wyswietl_rek(lolek*&glowa)
{
	if (glowa)
	{
		wyswietl_rek(glowa->nastepny);
		cout << glowa->wiek << endl << glowa->imie << "\n\n";
	}
}

void wyswietl(lolek*glowa)
{
	while (glowa)
	{
		cout << glowa->wiek << endl << glowa->imie << "\n\n";
		glowa = glowa->nastepny;
	}
}

void zapisz(const string& plik, lolek*glowa)
{
	ofstream f(plik, ios::binary);
	if (f.is_open())
	{
		while (glowa)
		{
			f .write(reinterpret_cast<char*>(&glowa->wiek), sizeof(int));
			glowa = glowa->nastepny;
		}
	}
	else
		return;
	f.close();
}


/*void pobierz (const string& plik, lolek*&glowa)
{
	ifstream f(plik, ios::binary);
	if (!f.is_open)
		return;

	int wiek;
	while (true)
	{
		f.read((char*)&wiek, getline(f, wiek));
		if (f)
			Dodaj_na_poczatek(glowa, wiek, "aaaa");
		else
			break;
	}
	/*else
	{
		f.read(glowa->wiek, );
	}*/
}

int main()
{
	lolek*glowa = nullptr;
	Dodaj_na_poczatek(glowa, 12, "Tomek");
	Dodaj_na_poczatek(glowa, 25, "Bolek");
	wyswietl(glowa);

	zapisz("cos.txt", glowa);
}



//reinterpret_cast<char*>(&glowa->wiek)   =    (char*)&glowa->wiek, sizeof(int)