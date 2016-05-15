////////////////////////////////
//Melanie Hynden
//Homework 5, problem 4, Rectangles
/////////////////////////////////

#include "Rectangle2d.h"
#include <iostream>
using namespace std;
int main()
{
	//create 3 rectangle2d objects
	Rectangle2d r1(2, 2, 5.5, 4.9);
	Rectangle2d r2(4, 5, 10.5, 3.2);
	Rectangle2d r3(3, 5, 2.3, 5.4);

	//display R1 area and perimeter
	cout << "The area of r1 is: " << r1.getArea(5.5, 4.9) << endl;
	cout << "The perimeter of r1 is: " << r1.getPerimeter(5.5, 4.9) << endl;

	//check to see if point is contained
	cout << "Does r1 contain (3,3)? ";
	if (r1.contains(3, 3)) cout << "True" << endl;
	else cout << "false" << endl; 


	//check to see if rectangle is contained
	cout << "Does r1 contain r2? ";
	if(r1.contains(r2)) cout << "True" << endl;
	else cout << "false" << endl;

	//check to see if overlap
	cout << "Does r1 overlap r3? ";
	if (r1.overlaps(r3)) cout << "true" << endl;
	else cout << "false" << endl;
		


}
