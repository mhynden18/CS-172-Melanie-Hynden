#ifndef FAN_H
#define FAN_H

class Fan
{
public:
	int speed; //int speed that specifies the speed of the fan
	bool on; //specifies whether the fan is on, bool because only two options: on and off
	double radius;

	Fan() //no argument constructor, constructs default fan and described settings 
	{
		speed = 1;
		on = false; //makes it off
		radius = 5; 
	} 


	//now set up all functions
	//for speed
	int getSpeed()
	{
		return speed;
	}
	//set the new speed 
	void setSpeed(int newSpeed)
	{
		speed = newSpeed;
	}

	//for radius
	double getRadius()
	{
		return radius;
	}
	//set the new radius
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
	
	//on or off switch
	bool turnOn()
	{
		return on;
	}
	//to turn on the fan
	void setOn(bool turnOn)
	{
		on = turnOn;
	}
	
	

};
#endif 