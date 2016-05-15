#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_
class Rectangle2d
{
private: //declare all variables
	double x;
	double y;
	double width;
	double height;
	
public: //all functions
	double getx() const; //get functions are all constant
	void setx(double newX); //set functions include parameters
	double gety() const;
	void sety(double newY);
	double getWidth() const;
	void setWidth(double newWidth);
	double getHeight() const;
	void setHeight(double newHeight);
	double getArea(double newWidth, double newHeight) const;
	double getPerimeter(double newWidth, double newHeight) const;
	bool contains(double x1, double y1) const;
	bool contains(const Rectangle2d &r); 
	bool overlaps(const Rectangle2d &r); 

	//no-arg constructor
	Rectangle2d()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	//specified constructor
	Rectangle2d(double x, double y, double width, double height)
	{
		this-> x = x; //user entered value
		this-> y = y;
		this-> width = width;
		this-> height = height;
	}
};


#endif
