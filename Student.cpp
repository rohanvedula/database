#include <iostream>
#include "Student.h"
#include "Person.h"
#include <string>
#include <sstream>
using namespace std;

	//determines is the studentID is valud
	bool Student::isValidId(string id){
		if(id.at(0)=='s')
			return true;
		return false;
	}

	//constructors
	Student::Student(): Person(){}

	Student::Student(string first, string last) : Person(first, last){}
	
	Student::Student(string f, string l, string a, int g, string id): Person(f,l,a){
		grade = g;
		if(isValidId(id)==true)
			studentId =id;
		else
			studentId = "invlaid id";
	}	
	
	Student::Student(string f, string l, int g, string id):Person(f,l){
		grade = g;
		if(isValidId(id)==true)
			studentId =id;
		else
			studentId = "invlaid id";
	}

	int Student::getGrade(){
		return grade;
	}
	string Student::getStudentId(){
		return studentId;
	}
	int Student::getNumLates(){
		return numLates;
	}
	void Student::setGrade(int n){
		grade = n;
	}
	void Student::setStudentId(string id){
		if(isValidId(id)==true)
			studentId =id;
		else
			studentId = "invlaid id";
	}
	void Student::addLate(){
		numLates = numLates + 1;
	}
	string Student::toString(){
		ostringstream s1;
		s1 << "Student info:\n"<< "\tName: "<<firstName<<" "<<lastName<<"\n\tAddress: "<<address<<"\n\tID: "<<studentId<<"\n\tGrade: "<<grade;
		string s2 = s1.str();
		return s2;
	} 

	//determines if 2 students are the same by looking at there names
	bool Student::equals(Student &k){
		if(firstName == k.getFirstName() && lastName==k.getFirstName()==0)
			return true;
		else
			return false;
	}