#include "funkcje.h"
#include <iostream>
#include <ctime>
using namespace std;

void wypelnienie(int tab[], int N)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		tab[i] = rand() % 30;
	}
}

double dodawanie(double a, double b)
{
	return a + b;
}

void zamiana(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void wypisanie(int tab[], int N)
{
	for (int i = 0; i < N; i++)
		cout << tab[i] << " ";
	cout << endl;
}