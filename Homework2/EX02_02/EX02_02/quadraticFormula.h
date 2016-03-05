#ifndef QUADRATICFORMULA_H
#define QUADRATICFORMULA_H
#include <cmath>
#include <iostream>
using namespace std;

class quadraticFormula
{
public:
	//data fields a, b, and c
	double a;
	double b;
	double c;													//Derek- this is fine, but things like a, b, c you might want private in other programs

	double discriminant;
	double r1;
	double r2;


	//constructor for arguments a, b and c
	quadraticFormula() //sets default values, no argument 
	{
		a = 3;
		b = 9;
		c = 2; 
	}

	//overload constructor
	quadraticFormula(double A, double B, double C) //user will be entering these values 
	{
		a = A;
		b = B;
		c = C;
	}

	//get functions
	double getA()														//Derek- perfect getters nice job

	{
		return a; //returns little a because that is what big A is set to
	}

	double getB()
	{
		return b;
	}
	
	double getC()
	{
		return c;
	}

	//get discriminant
	double getDiscriminant(double a, double b, double c)
	{
		discriminant = (b*b) - (4 * a*c);
		return discriminant;
	
		
	}

	//getRoot1 equation
	double getRoot1(double a, double b, double c)
	{
		r1 = (-b + sqrt(discriminant))/(2* a);
	
		return r1;
	}
	//getRoot2 equation 
	double getRoot2(double a, double b, double c)
	{
		r2 = (-b - sqrt(discriminant)) / (2 * a);
		
		return r2;
	}

	
};
#endif 