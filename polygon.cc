#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>


const double pi = M_PI;	

struct point
{
	double xco; 
	double yco;
};

struct polygon 
{
	std::vector<point> polygon;
};


//Polygon ausgeben
void print_poly(polygon p) 
{
	for (unsigned int i = 0; i < p.polygon.size(); ++i)
	{
		std::cout << "(" << p.polygon[i].xco;
		std::cout << " | " << p.polygon[i].yco << ")" << std::endl;
	}
}

polygon construct(const std::vector <double>& x, const std::vector <double>& y)
{
	polygon poly;

	//Wenn die x und y gleich sind und x ungleich 0
	if (x.size() == y.size() && x.size() != 0) 
	{
		for (int i = 0; i < x.size(); ++i)
		{
			point p;
			p.xco = x[i];
			p.yco = y[i];
			poly.polygon.push_back(p);
		}
	}
	else
	{
		std::cerr << "Ungültige Eingabe! Es ist keine eindeutige Zuordnung von x <-> y möglich." << std::endl;

	}

	return poly;
}


double volume(const polygon& poly)
{
	double sum = 0.;

	if (poly.polygon.size() > 2)
	{
		for (int i = 0; i < poly.polygon.size()-1; ++i)
		{
			sum += 0.5*poly.polygon[i].xco*poly.polygon[i+1].yco;
			sum -= 0.5*poly.polygon[i+1].xco*poly.polygon[i].yco;
		}
		
	}

	return(sum);
}

std::vector <double> xkords(int n)
{
	std::vector<double> x;
	for (int i = 0; i < n; ++i)
	{
		x.push_back(cos(i*2.*pi/n));
	}
	return(x);
}

std::vector <double> ykords(int n)
{
	std::vector<double> y;
	for (int i = 0; i < n; ++i)
	{
		y.push_back(sin(i*2.*pi/n));
	}	
	return(y);
}


int main ()
{
	//std::cout << std::setprecision(5);
	/*std::vector <double> xkoordinaten = {{1,3,2}};
	std::vector <double> ykoordinaten = {{1,2,3}};
	polygon polli = construct(xkoordinaten,ykoordinaten);
	print_poly(polli);
	std::cout << volume(polli) << std::endl;*/
	for (int n = 1; n < 10; ++n)
	{
		std::vector <double> x = xkords(n);
		std::vector <double> y = ykords(n);
		polygon molli = construct(x,y);
		std::cout << volume(molli) << std::endl;
	}
}
