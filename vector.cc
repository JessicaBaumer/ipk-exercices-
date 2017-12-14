#include <iostream>
#include <vector> 

bool groesterkleinsterwert ()


int main (int argc, char** argv)
{
	std::vector <int> v1;		//Vektor für ganze Zahlen

	std::vector <int> v2 (12);	//Vektor für ganze Zahlen mit 10 Einträgen

	std::vector <int> v3 = {{ 1, 3, 4, 5, 7, 8}}; //Vektor mit folgenden Zahlen

	int i = 1;

	for (i = 1; i <= 1; i++)
	{
	//std::cout << v1 [1] << std::endl; -> Da v1 keine Einträge hat, kann es nicht 						       ausgegeben werden

	std::cout << v2 [2] << std::endl;

	std::cout << v3 [3] << std::endl;

	}

return 0;

}
