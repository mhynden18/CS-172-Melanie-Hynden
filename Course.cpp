#include <iostream>
#include "Course.h" //include header file
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}


Course::~Course() //destructor
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}


void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity) //to make capacity bigger if adding another student will exceed capacity
	{
		increaseCapacity(students, capacity);
	}

	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name) //modifying this chunk
{
	students[numberOfStudents] = name;
	int flag = 0; //use a flag to mark spot that matches name
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
		{
			flag = i; //set flag equal to that space
		}
	}
	for (int i = flag; i < numberOfStudents - 1; i++) //use flag to go from there
	{
		students[i] = students[i + 1]; //shifts them over from the spot that is to be dropped
	}
	decreaseCapacity(students, capacity); //calling the decreaseCapacity function to decrease array size

}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudent() const
{
	return numberOfStudents;
}

string* Course::increaseCapacity(const string* List, int& size)
{
	string* incCap = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		incCap[i] = List[i];
	}

	size += 1; //pass by pointer
	return incCap;
}

string* Course::decreaseCapacity(const string* List, int& size)
{
	string* decCap = new string[size - 1]; //size-1 because don't want to include last thing
	for (int i = 0; i < numberOfStudents - 1; i++)
	{
		decCap[i] = List[i];
	}

	numberOfStudents -= 1; //pass by pointer
	return decCap;
}

string* Course::clear() //removes all students from the course
{
	delete[] students; //deletes all students
	students = new string[capacity];
	return students;
}

Course::Course(const Course& course) //doing a deep copy
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity]; //create a new array
}

