#include <iostream>
#include <cstdio>
using namespace std;

#define MISJA(x) Apollo_##x
#define WYSWIETL(x) #x

int main()
{
	int MISJA(9) = 9;
	cout << WYSWIETL(MISJA(9))<< endl;
	cout << MISJA(9) << endl;
}
