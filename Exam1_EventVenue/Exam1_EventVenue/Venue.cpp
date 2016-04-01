/////////////////////////////////////////////
//I affirm that all code given below was written solely by me, <Melanie>, and that any help I received adhered to the rules stated for this exam. 

#include <iostream>
#include <string> 
#include "Venue.h"

bool Venue::validTime(int time) //tests to see if a proposed time for an event is already taken, if it is, returns false
{
	if (-1 == scheduledEvents[time-1].getTime())
	{
		return true; //if it is -1, a free time, then it is a valid time
	}
	else
	{
		return false; //if it is not -1, then it is not a free time, so it is already booked and validTime must return false 
	}

}

void Venue::addEvent(int time, string name) //where they enter in a new event
{
	if (validTime(time) == true) //it must first have an open/valid slot to be placed in
	{
		scheduledEvents[time-1].setTime(time); //use set time function to set a time desired
		scheduledEvents[time-1].setTitle(name); //used set title function to name it what you want
		cout << "Event scheduled! " << endl; //then the event has been scheduled
	}
	else
	{
		cout << "Couldn't schedule event :( " << endl; //if it is not a valid time, then it cannot schedule the event
	}


	
}

Event Venue::findEvent(int time) 
{
	 //use time to access element in array
	return scheduledEvents[time-1]; //return at the time you are looking for 

}

Event Venue::findEvent(string name) //need to pass by something here?? 
{
	int count = 0;
	//use loop to test for name of element
	while (name != scheduledEvents[count].getTitle() && count <= 11) //name does not equal the title of the event that they are looking for 
	{
		if (count != 11) //do it up to 11 so it doesn't go over
		{
			count++; //increment count so that you go through each element
		}
		else
		{
			break; //need an alternative 
		}
	}
	return scheduledEvents[count]; //return the event at the count value it stopped at, meaning the one that's right 
	
}

