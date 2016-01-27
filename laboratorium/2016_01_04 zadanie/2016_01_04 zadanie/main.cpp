#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main(int argc, char**argv)
{
	string i_file_name;
	string o_file_name;

	
	for (int i = 1; i = argc-1 ;i++)
	{
		if (argv[i][0] == '-' && argv[i][1] == 'i'&& !argv[i][2])
		{
			i_file_name = argv[i+1];
		}
	}
	ifstream plik;
	plik.open(i_file_name);

	if (!plik.is_open())
		return 0;
			
}