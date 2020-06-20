#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

#ifndef TEACHER_H
#define TEACHER_H

class Teacher: public Person{
private:
	string teachables;
	string employeeId;
	bool isValidId(string);

public:
	Teacher();
	Teacher(string, string);
	Teacher(string, string, string, string, string);
	Teacher(string, string, string, string);
	string getTeachables();
	string getEmployeeId();
	void setTeachables(string);
	void setEmployeeId(string);
	void markStudentLate(Student &);
	string toString();
};

#endif