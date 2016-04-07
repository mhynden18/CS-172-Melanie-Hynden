#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	~Course(); //destructor
	Course(const Course&); //deep copy constructor
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudent() const;
	string* increaseCapacity(const string* List, int& size);
	string* Course::decreaseCapacity(const string* List, int& size);
	string* Course::clear();

private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};

#endif

