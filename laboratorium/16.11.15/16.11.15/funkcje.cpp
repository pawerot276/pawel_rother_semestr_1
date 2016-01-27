#include <iostream>
#include <string>
#include <fstream>
#include "funkcje.h"
using namespace std;

unsigned long long GetFileSize(const string& file_name)
{
	ifstream plik;
	plik.open(file_name);

	if (!plik.is_open())
		return 0;

	plik.seekg(0, ios::end);
}