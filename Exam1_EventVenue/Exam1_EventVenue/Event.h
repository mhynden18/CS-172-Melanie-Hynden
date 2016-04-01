#ifndef _EVENT_H_ //inclusion guard
#define _EVENT_H_ 
#include <string>
using namespace std; 

class Event {
private:
	int Time;
	string Title; 
	
public: 

	//no argument constructor
	Event();

	//overload constructor with "free" (a string" and time -1 (an int)
	Event(int , string); 

	int getTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);

};

#endif 