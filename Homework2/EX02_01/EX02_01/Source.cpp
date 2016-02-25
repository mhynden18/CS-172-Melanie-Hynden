/////////////////////////////////
//Melanie Hynden
//Homework 2, Example 1


#include <iostream>
#include "Fan.h"
using namespace std;
int main()
{
	Fan fan1;
	Fan fan2;

	//the following three things are the characteristics of fan 1
	int speed1 = 3;
	fan1.setSpeed(speed1); //relates to the void function for speed

	double radius1 = 10;
	fan1.setRadius(radius1);

	bool on1 = true;
	fan1.setOn(on1);

	//the following relates to fan 2
	int speed2 = 2;
	fan2.setSpeed(speed2);

	double radius2 = 5;
	fan2.setRadius(radius2);

	bool on2 = false;
	fan2.setOn(on2);


	//so that the bool data shows up as true/false instead of 1/0
	std::cout << std::boolalpha;

	//cout the information
	cout << "The speed of Fan 1 is " << fan1.speed << endl;
	cout << "The radius of Fan 1 is " << fan1.radius << endl;
	cout << "Fan 1 is on? " << fan1.on << endl;

	cout << "The speed of Fan 2 is " << fan2.speed << endl;
	cout << "The radius of Fan 2 is " << fan2.radius << endl;
	cout << "Fan 2 is on? " << fan2.on << endl;


	//to check my code
	cout << "press any key to continue" << endl;
	int answer;
	cin >> answer;


	return 0;
}