#include <iostream>
#include "Person.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student: public Person{
private:
	int grade;
	string studentId;
	int numLates = 0;
	bool isValidId(string);

public:
	Student();
	Student(string, string);
	Student(string, string, string, int, string);
	Student(string, string, int, string);
	int getGrade();
	string getStudentId();
	int getNumLates();
	void setGrade(int);
	void setStudentId(string);
	void addLate();
	string toString(); 
	bool equals(Student &);
};

#endif