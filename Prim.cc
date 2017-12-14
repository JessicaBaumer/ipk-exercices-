#include <iostream>

int main ()
{
    int n;
    std::cout << "Gebe eine (positive) Zahl ein: ";
    std::cin >> n;

    int i = 2;
    while (i < n) 
   { 
        if ((n % i) == 0) 
	{
            std::cout << n << " ist keine Primzahl" << std::endl;
            return 0;
        }
        i = i ++;
    }
    std::cout << n << " ist eine Primzahl" << std::endl;

    return 0;
}

//int main (int argc, char ** argv)
//{	
//	std::cout << "Gebe eine positive Zahl ein: ";
//	std::cin >> n;
//}
