///////////////////////////////
//Melanie Hynden
//Homework 5, problem 5
//11.13
/////////////////////////

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("Data Structures", 10);
	Course course2("Database Systems", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	course1.dropStudent("Brian Smith"); //drops student
	course2.dropStudent("Peter Jones");

	cout << "Number of Students in Course 1:" << course1.getNumberOfStudent() << endl;
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudent(); i++) //cout each student name
	{
		cout << students[i] << ", ";
	}

	cout << "Number of students in course2: " << course2.getNumberOfStudent() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudent(); i++)
	{
		cout << students[i] << ", ";
	}

	return 0;

}