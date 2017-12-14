#include <iostream>
using namespace std;

void collatz (int x)
{
	int erg = x;
		
	while ((erg != 1) && (erg != 0) && (erg != -1) && (erg != -5) && (erg != 17))
	{
		if (x % 2 == 0) 
		{
			erg = erg / 2;
		}
		else
		{
			erg = 3 * erg + 1;
		}
		cout << erg << ", " << flush;
	}
}

int main (int argc, char ** argv) 
{
	int eingabe;

	cout << "Mit welcher Zahl willst du starten?" << endl;
	cin >> eingabe;
	
	collatz(eingabe);

	return 0;
}
