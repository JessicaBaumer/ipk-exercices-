#include <iostream>
#include <vector>
#include <random>
#include <string>

#include "io.hh"



int main ()
{

	int seed, N;
	double min, max;
	
	std::cout << "seed = " << std::flush;
	std::cin >> seed;
	
	std::cout << "N = " << std::flush;
	std::cin >> N;
	
	std::cout << "min = " << std::flush;
	std::cin >> min;
	
	std::cout << "max = " << std::flush;
	std::cin >> max;
	
	std::vector <double> v; 
	v = uniform_distribution (seed, N, min, max);
	
	for (double i : v) 
		std::cout << i << std::endl;
		
	return 0;
	
}

	
