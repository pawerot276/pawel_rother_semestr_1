#include<iostream>
#include<string>

using namespace std;

#define zad5

#ifdef zad1a
int main(int argc, char**argv)
{
	string str = "ab";
	string str2 = "ab";
	cout << "1: ";
	cin >> str;
	cout << "2: ";
	cin >> str2;

	if (str.length() < str2.length())
		cout << str << endl;
	else
		cout << str2 <<endl;


	return 0;
}
#endif

#ifdef zad1b
int main(int argc, char**argv)
{
	string str = "ab";
	string str2 = "ab";
	cout << "1: ";
	cin >> str;
	cout << "2: ";
	cin >> str2;

	if (str.compare(str2) < 0)//str < str2
		cout << str;
	else
		cout << str2;

	return 0;
}
#endif

#ifdef zad2
int main(int argc, char**argv)
{
	string str = "ab";
	cout << "napis: ";
	cin >> str;
	int n = str.length();
	cout << "przed: " << str << endl << endl;

	for (int i = 0;i<n;i++)
	{
		if (str[i] == 'a')
			str[i] = 'z';
	}
	cout << "po: " << str << endl;
}
#endif

#ifdef zad3
int main(int argc, char**argv)
{
	string imie, nazwisko, wynik;
	cin >> imie >> nazwisko;
	wynik = imie.substr(0, 3);
	wynik.append(nazwisko, 0, 3);
	cout << wynik;

	return 0;
}
#endif

#ifdef zad4
int main(int argc, char**argv)
{
	int liczba ;
	int P;
	cin >> P;
	cin >> liczba;
	string wynik;
	while (liczba != 0)
	{
		wynik = char('0'+liczba % P)+wynik;
		liczba = liczba / P;
	}
	cout << wynik << endl;
}
#endif

#ifdef zad5
int main(int argc, char**argv)
{
	cout << "liczba parametow: " << argc<<endl;
	int i = 0;
	while (i<argc)
	{
		cout << argv[i] << endl;
		i++;
	}
}

#endif
