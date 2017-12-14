#include <iostream>
using namespace std;

bool isPrime (int number)
{
	int p;			//Primzahl = durch 1 und sich selbst teilbar
	int i = 2;
	while (i < p)
	{
		if ((p % i) == 0)
		{
			cout << "Ist keine Primzahl." << endl;
			return 0;
		}
	i = i++;		
	}
	cout << "Ist eine Primzahl." << endl;
	
}

int main (int argc, char ** argv)
{
	cout << "Gebe eine positive Zahl an: " << endl;
	int p;
	cin >> p;
	cout << isPrime(p) << endl;
	return 0;
}
