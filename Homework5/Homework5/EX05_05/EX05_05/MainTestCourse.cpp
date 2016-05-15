#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("Data Structures", 10); //create course 1
	Course course2("Database Systems", 15); //create course 2

	course1.addStudent("Peter Jones"); //add students
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones"); //add students
	course2.addStudent("Steve Smith");

	cout << "Number of students in course1: " << course1.getNumberOfStudents() << endl; //number of students
	string* students = course1.getStudents(); //return students
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", "; //display a student

	cout << "\nNumber of students in course2: " << course2.getNumberOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	return 0;

}