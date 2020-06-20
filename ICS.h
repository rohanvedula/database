#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "SchoolClass.h"
using namespace std;

#ifndef ICS_H
#define ICS_H

class ICS: public SchoolClass{
private:
	bool *hasLap = new bool[30];
	int *marks = new int[30];

public:
	ICS(Teacher, string, int);
	//deallocating pointers used
	~ICS(){
		delete[] hasLap;
		delete[] marks;
	};

	void setMark(Student &, int);
	void hasLaptop(Student &, bool);
	void getTranscript(Student &);
	int countLaptop();

	void printClass();
};

#endif