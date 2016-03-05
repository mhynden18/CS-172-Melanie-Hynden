///////////////////////////
//Melanie Hynden
//Homework 2:  9.6

#include <iostream>
#include "quadraticFormula.h"
using namespace std;
int main()
{
	//declare variables that the user will enter
	double A;
	double B;
	double C; 
	//prompt user for values of a, b, and c
	cout << "Please enter the 'a' value: " << endl;
	cin >> A;
	cout << "Please enter the 'b' value: " << endl;
	cin >> B;
	cout << "Please enter the 'c' value: " << endl;
	cin >> C;

	
	quadraticFormula quad1; //grabbing the stuff from the header file
	if (quad1.getDiscriminant(A, B, C) < 0) //if it returns 0, then it means the discriminant is negative, so no real roots
	{
		cout << "The equation has no real roots. " << endl;
	}
	else if (quad1.getDiscriminant(A, B, C) == 0)
	{
		cout << quad1.getRoot1(A, B, C) << endl;
		
	}
	else
	{
		cout << quad1.getRoot1(A, B, C) << endl;
		cout << quad1.getRoot2(A, B, C) << endl;
	}
	


}