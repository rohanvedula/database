#include <iostream>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include <string>
#include <sstream>
using namespace std;

	//determines is the studentID is valud
	bool Teacher::isValidId(string id){
		if(id.at(0)=='c')
			return true;
		return false;
	}

	//constuctors
	Teacher::Teacher(): Person(){
		teachables = " ";
		employeeId = " ";
	}

	Teacher::Teacher(string first, string last): Person(first, last){}
	
	Teacher::Teacher(string f, string l, string a, string t, string id): Person(f, l, a){
		teachables = t;
		if(isValidId(id)==true)
			employeeId = id;
		else
			employeeId = "invalid id";
	}

	Teacher::Teacher(string f, string l, string t, string id): Person(f,l){
		teachables = t;
		if(isValidId(id)==true)
			employeeId = id;
		else
			employeeId = "invalid id";
	}

	string Teacher::getTeachables(){
		return teachables;
	}
	string Teacher::getEmployeeId(){
		return employeeId;
	}
	void Teacher::setTeachables(string t){
		teachables = t;
	}
	void Teacher::setEmployeeId(string id){
		if(isValidId(id)==true)
			employeeId = id;
		else
			employeeId = "invalid id";
	}
	void Teacher::markStudentLate(Student &s){
		s.addLate();
	}

	string Teacher::toString(){
		ostringstream s1;
		s1 << "Teacher info:\n"<< "\tName: "<<firstName<<" "<<lastName<<"\n\tAddress: "<<address<<"\n\tID: "<<employeeId<<"\n\tTeachables: "<<teachables;
		string s2 = s1.str();
		return s2;
	}
