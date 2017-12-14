#include <iostream>
#include <vector>

double mean (const std::vector <double>& v)
{
	double mid = 0.;
	
	for (int i = 0; i <= v.size(); i++)
	{
		mid += v[i] / v.size();					
		
	}
	
	return mid;
}

int main ()
{

	std::vector <double> v = {{2, 4, 5.5, 100}};
	
	std::cout << mean (v) << std::endl;


}
