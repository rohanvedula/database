#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
protected:
	string firstName;
	string lastName;
	string address;

public:
	Person();
	Person(string first, string last);
	Person(string first, string last, string add);
	string getFirstName();
	string getLastName();
	string getAddress();
	void setFirstName(string n);
	void setLastName(string n);
	void setAddress(string a);
	
	virtual string toString();

	//prue virtual function
	virtual bool isValidId(string) = 0;
};

#endif