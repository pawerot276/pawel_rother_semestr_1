#include <iostream>
#include <ctime>
#include "funkcje.h"

using namespace std;

#define zad3

#ifdef zad1

int main(int argc, char*argv)
{
	double x, y;
	cin >> x >> y;
	cout << dodawanie(x, y) << endl;
}
#endif

#ifdef zad2
int main(int argc, char*argv)
{
	int x, y;
	cin >> x >> y;
	cout << "Przed zamiana: \n" << x << " " << y << endl;
	zamiana(x, y);
	cout << "Po zamianie: \n" << x << " " << y << endl;
}

#endif

#ifdef zad3
int main(int argc, char*argv)
{
	const int N = 10;
	int tab[N];

	wypelnienie(tab, N);
	wypisanie(tab, N);

}
#endif