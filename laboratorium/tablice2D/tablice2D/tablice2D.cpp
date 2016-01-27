#include<iostream>
#include<iomanip>
using namespace std;

#define wezyk2

#ifdef tab_mnoz
int main()
{
	const int N = 17;
	int tab[N][N];
	tab[0][0] = 0;

	for (int i = 1; i < N; i++)
	{
		tab[0][i] = { i };
		tab[i][0] = { i };
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
			tab[i][j] = i*j;
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j == 0 && i == 0)
				cout<<"     ";
			else
				cout << setw(4) << hex << tab[i][j] << " ";
		}
		cout << endl;
	}
}

#endif

#ifdef wezyk1
int main()
{
	int i, j;
	const int rozmiar = 50;
	int tab[rozmiar][rozmiar];
	int w = 1;

	for (i = 0; i<4; i++)
	{
		for (j = 0; j<4; j++)
		{
			tab[i][j] = w;
			w++;
		}
	}


	for (i = 0; i<4; i++)
	{
		if (i % 2 != 0)
		{
			for (j = 3; j >= 0; j--)
			{
				cout << tab[i][j] << '\t';
			}
			cout << endl;
		}
		else
		{
			for (j = 0; j<4; j++)
			{
				cout << tab[i][j] << '\t';
			}
			cout << endl;
		}
	}


	return 0;
}

#endif

#ifdef wezyk2
int main()
{
	const int N = 10;
	int w = 0;
	int s = 1;
	int tab[N][N];
	int kol = 0;
	int wiersz = 0;

	for (w; w < N; w++)
	{
		for (kol; kol < N - 1 - w; kol++)
		{
			tab[wiersz][kol] = s;
			s++;
		}

		for (wiersz; wiersz < N - w; wiersz++)
		{
			tab[wiersz][kol] = s;
			s++;
		}

		wiersz--;
		kol--;
		for (kol; kol >= 0 + w; kol--)
		{
			tab[wiersz][kol] = s;
			s++;
		}
		wiersz--;
		kol++;
		for (wiersz; wiersz >= 1 + w; wiersz--)
		{
			tab[wiersz][kol] = s;
			s++;
		}
		wiersz++;
		kol++;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(4) << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

#endif