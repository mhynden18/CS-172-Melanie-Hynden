#ifndef _VENUE_H_ //inclusion guard
#define _VENUE_H_ 
#include "Event.h" //must include Event.h because we use type Event

class Venue{
private:
	Event scheduledEvents[12]; //the venue has 12 event spots
	int numEvents; 
	bool validTime(int time); //bool that will return true or false based on availability 
public: 
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name); 

};


#endif 

