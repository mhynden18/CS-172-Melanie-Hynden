#include "Rectangle2d.h"
#include <iostream>
using namespace std;


//get and set x
double Rectangle2d::getx() const
{
	return x;
}
void Rectangle2d::setx(double newX)
{
	x = newX;
}

//get and set y
double Rectangle2d::gety() const
{
	return y;
}
void Rectangle2d::sety(double newY)
{
	y = newY;
}

//get and set width
double Rectangle2d::getWidth() const
{
	return width;
}
void Rectangle2d::setWidth(double newWidth)
{
	width = newWidth;
}

//get and set height
double Rectangle2d::getHeight() const
{
	return height;
}
void Rectangle2d::setHeight(double newHeight)
{
	height = newHeight;
}

//area function
double Rectangle2d::getArea(double newWidth, double newHeight) const 
{
	double Area = newWidth * newHeight;
	return Area;
}

//perimeter function
double Rectangle2d::getPerimeter(double newWidth, double newHeight) const 
{
	double Perimeter = (2 * newWidth) + (2 * newHeight);
	return Perimeter;
}

bool Rectangle2d::contains(double x1, double y1) const
{
	/*cout << x << " " << y << " " << width << " " << height << endl; */

	if ((x1 > (this-> x - 0.5*this-> width)) && (x1 < (this->x + 0.5*this-> width)) && (y1 >(this-> y - 0.5*this-> height)) && (y1 < (this-> y + 0.5*this-> height))) //middle is the middle point
		return true;
	else
		return false;
}

bool Rectangle2d::contains(const Rectangle2d &r)
{
	double top = r.gety() + r.getHeight() / 2; //top edge of rectangle checked to be inside 
	double bottom = r.gety() - r.getHeight() / 2; //bottom edge
	double right = r.getx() + r.getWidth() / 2; //right edge
	double left = r.getx() - r.getWidth() / 2; //left edge 

	if ((right <= (this->x + 0.5*this->width)) && (left >= (this->x - 0.5*this->width) && (bottom >= (this->y - 0.5*this->height)) && (top <= (this->y + 0.5*this->height))))
		return true;
	else
		return false; 
}

bool  Rectangle2d::overlaps(const Rectangle2d &r)
{
	double top = r.gety() + r.getHeight() / 2; //top edge of rectangle checked to be inside 
	double bottom = r.gety() - r.getHeight() / 2; //bottom edge
	double right = r.getx() + r.getWidth() / 2; //right edge
	double left = r.getx() - r.getWidth() / 2; //left edge 

	//first it cannot be "overlapping" if it is completely included
	if ((right < (this->x + 0.5*this->width)) && (left >(this->x - 0.5*this->width) && (bottom > (this->y - 0.5*this->height)) && (top < (this->y + 0.5*this->height))))
		return false; 

	//now check if top or bottom AND left or right are within the boundaries
	if ((right < (this->x + 0.5*this->width)) || (left >(this->x - 0.5*this->width)))
		if ((bottom > (this->y - 0.5*this->height)) || (top < (this->y + 0.5*this->height)))
			return true; 
		else return false; 
	
	
}
