//////////////////////////////////////////////
//I affirm that all code given below was written solely by me, <Melanie>, and that any help I received adhered to the rules stated for this exam. 

#include <iostream>
#include <string> 
#include "Event.h" //include the header file of event to use its stuff

//default constructor
//default event represents free time
Event::Event()
{
	Title = "free"; //has the name "free"
	Time = -1; //has the time -1
}


//overload constructor
Event::Event(int time, string name)
{
	Time = time;
	Title = name; 
}

int Event::getTime()
{
	return Time; 
}

string Event::getTitle()
{
	return Title; 
}

void Event::setTime(int t)
{
	Time = t; 
}

void Event::setTitle(string name)
{
	Title = name; 
}
