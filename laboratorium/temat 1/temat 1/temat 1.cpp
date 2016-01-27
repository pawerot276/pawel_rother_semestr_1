#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char**argv)
{
	double a, b, c;
	cout << "Program oblicza miejsca zerowe funkcji kwadratowej y=ax^2 + by + c \n";
	cout << "Podaj a: \n";
	cin >> a;
	cout << "Podaj b: \n";
	cin >> b;
	cout << "Podaj c: \n";
	cin >> c;
	cout << "Twoja funkcja ma postac y= " << a <<"x^2 + " << b <<"x +" << c << endl;
	
	double delta;
	delta = (b*b) - (4 * a*c);

	if (a==0)
	{
		cout << "To nie jest funkcja kwadratowa. \n";
	}
	else if (delta == 0)
	{
		double x;
		x = -b / (2 * a);
		cout << "Funkcja posiada jeden pierwiastek: x = " << x;
	}
	else if (delta > 0)
	{
		double x1, x2;
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		cout << "Funkcja posiada 2 pierwiastki: \nx1 = " << x1 << "\nx2 = " << x2 << endl;
	}
	else 
	{
		double x1r, x2r, x1i, x2i;
		x1r = -b / (2 * a);
		x1i = (sqrt(-delta)) / 2 * a;
		x2r = -b / (2 * a);
		x2i = (sqrt(-delta) / 2 * a);
		cout << "Funkcja posiada 2 pierwiastki: \nx1 = " << x1r << " + i" << x1i << " \nx2 = " << x2r << " - i" << x2i << endl;
	}


}