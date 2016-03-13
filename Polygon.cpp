///////////////////////////////////////////////////////
//Melanie Hynden
//Dr. Bell, CS 172
//Homework 3, polygons 

#include <iostream>
#include "Polygon.h" //include header file
using namespace std;
int main()
{
	Polygon polygonDefault; //no arg constructor 
	Polygon polygon1; //Polygon(6, 4), 6 sides with side length of 4
	Polygon polygon2; //Polygon(10, 4, 5.6, 7.8) 


	//output the no arg constructor
	int n = Polygon().getn();
	double side = Polygon().getside();
	cout << "the no arg constructor has a perimeter of: " << polygonDefault.getPerimeter(n, side) << endl; //get perimeter of this object
	cout << "the no arg constructor has an area of: " << polygonDefault.getArea(n, side, 0, 0) << endl; //gets the area
	cout << endl; 


	//characteristics of polygon1
	int numberOfSides1 = 6; //values given in the problem
	double sideLength1 = 4;
	

	//characteristics of polygon2
	int numberOfSides2 = 10; //values given in the problem
	double sideLength2 = 4;
	double xcoordinate2 = 5.6;
	double ycoordinate2 = 7.8;

	cout << "The perimeter of polygon1 (6,4) is: " << polygon1.getPerimeter(numberOfSides1, sideLength1) << endl; //get perimeter, putting specific values in
	cout << "The area of polygon1 is: " << polygon1.getArea(numberOfSides1, sideLength1, 0, 0) << endl; //getting area, with specific values
	cout << endl;

	cout << "The perimeter of polygon2 (10, 4, 5.6, 7.8) is: " << polygon2.getPerimeter(numberOfSides2, sideLength2) << endl;
	cout << "the area of polygon2 is: " << polygon2.getArea(numberOfSides2, sideLength2, xcoordinate2, ycoordinate2) << endl;





}