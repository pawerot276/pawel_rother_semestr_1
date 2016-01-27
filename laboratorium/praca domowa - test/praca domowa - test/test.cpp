#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
	cout << "Witam" <<endl;
	//Wyœwietla napis "Witam"

	cout << "Podaj mase (kg)";
	int masa, wzrost, BMI;
	cin >> masa;
	cout << "Podaj wzrost (cm)";
	cin >> wzrost;
	BMI = masa / (wzrost*wzrost / 10000.);
	cout << "Twoje BMI wynosi " << BMI << endl;

	return 0;
	
}