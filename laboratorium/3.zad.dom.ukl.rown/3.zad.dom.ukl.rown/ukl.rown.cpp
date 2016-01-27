#include <iostream>
using namespace std;
double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;

int main()
{
	cout << "Program liczy pierwiastki ukladu rownan funkcji liniowych:\n\n" << "ax+by=c\n" << "dx+ey=f\n\n";
	cout << "Podaj wspolczynniki a b c pierwszego rowanania (oddziel je spacja): ";
	cin >> a >> b >> c;
	cout << "Podaj wspolczynniki d e f drugiego rowanania (oddziel je spacja): ";
	cin >> d >> e >> f;
	cout << "\nUklad rownan ma postac:\n\n" << a << "x+" << b << "y=" << c << "\n" << d << "x+" << e << "y=" << f << "\n";

	if ((a == 0 && b == 0) || (d == 0 && e == 0))
	{
		cout << "Pierwsze lub drugie rownanie nie jest funkcja liniowa - uklad nie posiada rozwiazan\n";
	}
	else if (a == 0 && d == 0)
	{
		if ((c / b) == (f / e))
		{
			cout << "Uklad jest nieoznaczony - nieskonczenie wiele rozwiazan\n";
		}
		else
		{
			cout << "Uklad jest sprzeczny - brak rozwiazan\n";
		}
	}
	else if (b == 0 && e == 0)
	{
		if ((c / a) == (f / d))
		{
			cout << "Uklad jest nieoznaczony - nieskonczenie wiele rozwiazan\n";
		}
		else
		{
			cout << "Uklad jest sprzeczny - brak rozwiazan\n";
		}
	}
	else if ((a / b) == (d / e) && (c / b) != (f / e) && b != 0 && e != 0)
	{
		cout << "Uklad jest sprzeczny - brak rozwiazan\n";
	}
	else if ((a / b) == (d / e) && (c / b) == (f / e) && b != 0 && e != 0)
	{
		cout << "Uklad jest nieoznaczony - nieskonczenie wiele rozwiazan\n";
	}
	else if (e == 0)
	{
		y = (f*a - d*c) / (-(d*b) + a*e);
		x = f / d;
		cout << "\nRozwiazaniem tego ukladu sa liczby:\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	else if (a == 0)
	{
		y = (f*a - d*c) / (-(d*b) + a*e);
		x = (f - e*y) / d;
		cout << "\nRozwiazaniem tego ukladu sa liczby:\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	else
	{
		y = (f*a - d*c) / (-(d*b) + a*e);
		x = (c - b*y) / a;
		cout << "\nRozwiazaniem tego ukladu sa liczby:\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	return 0;
}