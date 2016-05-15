#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0; //initialize data field
	this->courseName = courseName; //set course name
	this->capacity = capacity; //set capacity
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students; //destroy dynamic array
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++; //increment number of students
}

void Course::dropStudent(const string& name)
{
	//part of the problem
}

string* Course::getStudents() const
{
	return students; //return students
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents; 
}