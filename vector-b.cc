#include <iostream>
#include <vector> 


int minmax (a [i])
{
	int min, i = 0;
	
	min = a [i];
	
	for (; i < sizeof (a) / sizeof (int); i++)
	{
		if (a [i] < min)
			min = a [i];
	}
	
	//int max, i = 0;
	
	//max = a [i]
	
	//for (; i > sizeof (a) / sizeof (int); i++)
	//{
	//	if (a [i] > max)
	//		max = a [i];
	//} 
	
	return min;
}


int main (int argc, char** argv)
{
	std::vector <int> a = {{ 1, 3, 4, 5, 7, 8}}; //Vektor mit folgenden Zahlen

	int i = a[0];	
	
	std::cout << minmax (a[i]) << std::endl;

	}

return 0;

}
