#ifndef EVENNUMBER_H
#define EVENNUMBER_H

class EvenNumber
{
public:
	//declare up here so they can be used later
	int value;
	int next;
	int previous;

	//no arg constructor
	EvenNumber() //same name as the class					
	{
		value = 0; // default setting is to make this number 0
	}

	//constructor to construct even number object with specified value
	EvenNumber(int x)
	{
		value = x; //changes to user's value entered
	}



	int getValue(int value) //returns the value, puts in the value of 16
	{
		return value;
	}

	int getNext(int value)
	{
		next = value + 2; //adds 2 to the value, so 2+16 = 18
		return next;
	}

	int getPrevious(int value)
	{
		previous = value - 2; //subtracts 2 from the value, so 16-2 = 14
		return previous;
	}
};

#endif

