#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

class SchoolClass{
protected:
	Teacher head;
	string classCode;
	int section;
	Student *sClass = new Student[30];

public:
	SchoolClass(Teacher, string, int);
	~SchoolClass(){
		delete[] sClass;
	};
	void addStudent(Student &);
	string inClass(Student &);
	void sortClass();
	int countStudents();
	
	virtual void printClass();
};

#endif