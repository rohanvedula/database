#include <iostream>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include "SchoolClass.h"
#include <string>
#include <sstream>
using namespace std;

//counts number of students in class
static int counter = 0;

//default constuctor for a class
SchoolClass::SchoolClass(Teacher n, string k, int s){
	head = n;
	classCode = k;
	section = s;
}

//adds a student to the class
void SchoolClass::addStudent(Student &k){
	sClass[counter] = k;
	counter++;
}

//determines whether a student is in a class or not
string SchoolClass::inClass(Student &k){
	for(int i = 0; i<counter; i++){
		if(sClass[i].equals(k))
			return "true";
	}
	return "false";
}

//default function for print class
void SchoolClass::printClass(){
	cout<<"Class info:"<<endl;
	cout<<"\tTeacher: "<<head.getFirstName()<<" "<<head.getLastName()<<endl;
	cout<<"\tClass Code: "<<classCode<<"-0"<<section<<endl;
	cout<<"\tStudent List: "<<endl;

	for(int i = 0; i<counter; i++){
		cout<<"\t\t"<<sClass[i].getFirstName()<<" "<<sClass[i].getLastName()<<endl;
	}
	
}

//returns number of students in class
int SchoolClass::countStudents(){
	return counter;
}