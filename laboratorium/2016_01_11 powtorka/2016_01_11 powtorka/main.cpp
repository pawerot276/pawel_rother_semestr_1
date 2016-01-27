#include <cmath>
#include <iostream>
using namespace std;
using uint32 = unsigned int;

char get_bit(uint32 l, int p)
{
	return 	l >> p & 1;
}

char set_bit(uint32 l, int p)
{
	return l | (1 << p);
}

char reset_bit(uint32 l, int p)
{
	return ~(1 << p) & l;
}

int main()
{
	uint32 a = 1;
	char*ptr = (char*)&a;
	for (int i = 0;i < 4;i++)
		cout << (int)ptr[i];
}