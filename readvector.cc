#include <iostream>

#include "io.hh"



int main ()
{
	std::cout << "Welche Zahlen sollen in dem Vektor stehen?\n";
	std::cout << "(beende deine Eingabe mit einer leeren Zeile)\n";
	
	std::vector <double> v;
	v = read_vector();
	
	for (double i : v) //Ausgabe des Vektors
		std::cout << i << std::endl;
		
	return 0;
	
}

	
