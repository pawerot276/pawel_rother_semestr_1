#include <iostream>
#include <ctime>

using namespace std;
int main ()
{
	cout << "Masz za zadanie odgadnac liczbe od 0 do 14. Masz tylko 4 proby!\nPowodzenia!\n";
	srand(time(NULL));
	int x = rand() % 15;	//losowa liczba, która jest reszt¹ z dzielenia przez 15
	int n = 1;				//licznik prób
	int y = 5;				//maks.liczba prób u¿ytkownika (y-n)
	int z = 0;				//podana przez u¿ytkownika liczba
	while (n < y)
	{
		cout << "Podaj liczbe: ";  
		cin >> z;
		if (z == x)
		{
			cout << "Gratulacje, znalazles wylosowana liczbe. Liczba Twoich prob: " << n <<endl;
			return 0;
		}
		else if (z>x)
		{
			cout <<"Twoja lizcba jest mniejsza od: " << z << "\nProbuj dalej.\nLiczba prob wynosi: " << n <<endl<<endl;
		}
		else
		{
			cout << "Twoja lizcba jest wieksza od: " << z << "\nProbuj dalej.\nLiczba prob wynosi: " << n <<endl<<endl;
		}
		n+=1;
	}
	cout << "Za duzo prob, koniec gry.\n" <<"Wylosowana liczba to: " <<x <<endl;
}