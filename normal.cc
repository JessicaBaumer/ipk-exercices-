#include <iostream>
#include <vector>
#include <random>
#include <string>

#include "io.hh"



int main ()
{

	int seed, N;
	double avg, std_dev;
	
	std::cout << "seed = " << std::flush;
	std::cin >> seed;
	
	std::cout << "N = " << std::flush;
	std::cin >> N;
	
	std::cout << "avg = " << std::flush;
	std::cin >> avg;
	
	std::cout << "std_dev = " << std::flush;
	std::cin >> std_dev;
	
	std::vector <double> v; 
	v = normal_distribution (seed, N, avg, std_dev);
	
	for (double i : v) 
		std::cout << i << std::endl;
		
	return 0;
	
}

	
