#include <cmath>
#include <cstdlib>

#ifndef _POLYGON_H_
#define _POLYGON_H_

class Polygon
{
private:
	int n; //number of sides
	double side; //length of side
	double x; //x coordinate of center of polygon
	double y; //y coordinate of center of polygon
public:
	int N; //number of sides entered
	double SIDE; //sides entered
	double X; //x entered by user
	double Y; //y entered by user
	double perimeter; //defining perimeter to use in equation later 
	double area; //defining area to use in equation later
	const double pi = 3.14159; 

	Polygon() //no arg constructor
	{
		n = 3;
		side = 1;
		x = 0;
		y = 0; 
	}

	Polygon(int N, double SIDE) //constructor that creates polygons with specified side and length, but origin still at (0,0)
	{
		n = N;
		side = SIDE; 
		x = 0;
		y = 0;
	}

	Polygon(int N, double SIDE, double X, double Y) //cosntructor that has specifiied everything 
	{
		n = N;
		side = SIDE;
		x = X; 
		y = Y;
	}

	//accessor functions and mutator functions for all data fields 
	//get function for n
	int getn()
	{
		return n; 
	}


	//get function for side
	double getside()
	{
		return side;
	}
	
	

	//get function for x
	double getx()
	{
		return x;
	}

	

	//get function for y
	double gety()
	{
		return y; 
	}



	//constant function getPerimeter that returns the perimeter of the polygon
	double getPerimeter(int n, double side)
	{
		perimeter = (n * side); //for regular polygons, need to know number of sides, then all same length so multiply by length 
		return perimeter; 
	}

	double getArea(int n, double side, double x, double y)
	{
		area = ((n*pow(side, 2)) / (4 * tan(pi / n))); 
		return area; 
	}


};

#endif 
