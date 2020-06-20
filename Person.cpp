#include <iostream>
#include "Person.h"
#include <string>
#include <sstream>
using namespace std;

	//constructor methods
	Person::Person(){
		lastName = " ";
		firstName = " ";
		address = " ";
	}
	Person::Person(string first, string last){
		lastName = last;
		firstName = first;
		address = "unknown";
	}
	Person::Person(string first, string last, string add){
		lastName = last;
		firstName = first;
		address = add;
	}
	string Person::getFirstName(){
		return firstName;
	}
	string Person::getLastName(){
		return lastName;
	}
	string Person::getAddress(){
		return address;
	}
	void Person::setFirstName(string n){
		firstName = n;
	}
	void Person::setLastName(string n){
		lastName = n;
	}
	void Person::setAddress(string a){
		address = a;
	}

	//base for toString function
	string Person::toString(){
		ostringstream s1;
		s1 << "Info:\n"<< "\tName: "<<firstName<<" "<<lastName<<"\n\tAddress: "<<address;
		string s2 = s1.str();
		return s2;
	}