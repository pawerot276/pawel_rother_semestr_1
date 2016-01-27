#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main()
{
	const int N = 10;
	int tab[N];
	int minimum = 0;
	int z = 0;
	srand(time(NULL));

	for (int i = 0; i < N; i++)
		tab[i] = rand()%20;
	for (int i = 0; i < N; i++)
		cout << tab[i] << "  ";

	for (int s = 0; s < N; s++)
	{
		minimum = tab[s];
		int i = s;

		for (i; i < N; i++)
		{
			
			if (tab[i] < minimum)
			{
				minimum = tab[i];
				z = i;
			}
		}
		if (minimum == tab[s])
			z = s;
		int x = tab[s];
		tab[s] = minimum;
		tab[z] = x;
	}

	cout << "\n";

	for (int i = 0; i < N; i++)
		cout << tab[i]<<"  ";

	cout << "\n";
}