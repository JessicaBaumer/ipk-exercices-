#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char** argv)
{
	double a;
	cout << "a = " << flush;
	cin >> a;

	double b;
	cout << "b = " << flush;
	cin >> b;

	double c;
	cout << "c = " << flush;
	cin >> c;

	double d; 
	d = b*b; 		//b² (Schritt 1)
	d = d-4*a*c;		//b²-4ab (Schritt 2)
	
	double wurzel2 = sqrt(d);	//Wurzel ziehen von (b²-4ab) (Schritt 3)
	
	cout << wurzel2 << endl;

	double x;
	x = wurzel2 - b;		//positive Wurzel -b 
	
	double y;
	y = -wurzel2 - b;		//negative Wurzel -b (Schritt 4)

	x = x/(2*a);
	y = y/(2+a);

	//cout << "x1 = " << x << endl;
	//cout << "x2 = " << y << endl;

	return 0;
}

	
