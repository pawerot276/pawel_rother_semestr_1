#include <iostream>
#include <cmath>
using namespace std;

#define zad5

#ifdef zad1b
unsigned int N = 0;
int main()
{
	cout << "podaj N: ";
	cin >> N;
	for (; N > 0; N--)
	{
		cout << N << endl;
	}
}
#endif

#ifdef zad1c
//u¿ytkownik podaje 3 liczby (start, stop, dzielnik). 
//Program wypisuje wszystkie liczby z zakresu <start, stop), 
//które s¹ podzielne przez dzielnik.
int main()
{
	int start = 0, stop = 0, dzielnik = 0;
	cout << "Podaj poczatek, koniec i dzielnik";
	cin >> start >> stop >> dzielnik;

	for (start; start<stop; start++)
	{
		if (start %dzielnik == 0)
		{
			cout << start << endl;
		}
	}

}
#endif

#ifdef zad1d
int main()
{
	long double podstawa = 0, wykladnik = 0, x = 0, wynik=0;
	cout << "Podaj podstawe oraz wykladnik ";
	cin >> podstawa >> wykladnik;
	wynik = 1;
	if (podstawa == 0 && wykladnik == 0)
	{
		cout << "Symbol nieoznaczony\n";
	}
	else if (wykladnik < 0)
	{
		wykladnik = -1 * wykladnik;
		podstawa = 1 / podstawa;
		for (;; x++)
		{
			if (x == wykladnik)
				break;
			wynik = podstawa*wynik;
			
		}
	}
	else
	{
		for (;; x++)
		{
			if (x == wykladnik)
				break;
			wynik = podstawa*wynik;
		}
	}
	cout << wynik << endl;
	return 0;
}

#endif

#ifdef zad2
int main()
{
	unsigned long liczba = 0, dzielnik = 2;
	cout << "Podaj liczbe dodatnia rozna od zera. Program odpowie czy jest to liczba pierwsza.\n";
	cin >> liczba;
	bool warunek = 1;


	for (; dzielnik < liczba && warunek == 1; dzielnik++)
	{
		if (liczba % dzielnik == 0)
		{
			cout << "To nie jest liczba pierwsza\n";
			warunek = 0;
		}
	}
	if (warunek==1)
	cout << "Twoja liczba jest liczba pierwsza\n";
	return 0;
}
#endif

/* Zadania 3 oraz 4 s¹ w solucji o nazwie: 2.zad.dom.zgadywanie.liczby */

#ifdef zad5
int main()
{
	unsigned int ilosc = 0;
	double srednia = 0, suma = 0, x = 0, max = -100000000, min = -max, odchylenie = 0, kwadraty = 0;
	bool zgoda = 0;
	while (1)
	{
		cout << "Wprowadz liczbe: ";
		cin >> x;
		ilosc++;
		suma = suma + x;
		kwadraty = kwadraty + x*x;
		srednia = suma / ilosc;
		if (x > max)
			max = x;
		if (x < min)
			min = x;

		odchylenie = sqrt((pow (ilosc,-1)*kwadraty)-(pow (srednia, 2)));

		cout << "Liczba wprowadzony liczb to: " << ilosc <<endl;
		cout << "Suma wprowadzonych licb to: " << suma <<endl;
		cout << "Srednia wprowadzonych liczb to: " << srednia << endl;
		cout << "Minimalna z wprowadzonych liczb to:" << min << endl;
		cout << "Maksymalna z wprowadzonych liczb to: " << max << endl;
		cout << "Odchylenie standardowe wprowadzonych liczb wynosi: " << odchylenie << endl << endl;

		cout << "Czy chcesz wprowadzic kolejna liczbe? Jesli tak wpisz 1, jesli nie, wpisz 0. ";
		cin >> zgoda;
		if (zgoda == 0)
			break;
	}
	return 0;
}
#endif