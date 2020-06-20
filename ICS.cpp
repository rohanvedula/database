#include <iostream>
#include <fstream>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include "SchoolClass.h"
#include "ICS.h"
#include <string>
#include <sstream>
using namespace std;

static int counter = 0;


ICS::ICS(Teacher n, string k, int s): SchoolClass(n,k,s){}

//setting mark of a cetain student by first finding the student in the class and then attaching the mark to the index
void ICS::setMark(Student &k, int mark){
	int temp = 0;
	for(int i = 0; i<30; i++){
		if(sClass[i].equals(k))
			temp = i;
	}
	marks[temp] = mark;
}

//setting whether the student has a laptop by first finding the student in the class and then attaching the mark to the index
void ICS::hasLaptop(Student &k, bool laptop){
	int temp = 0;
	for(int i = 0; i<30; i++){
		if(sClass[i].equals(k))
			temp = i;
	}
	hasLap[temp] = laptop;
	counter++;
}

//returning the number of student that have a laptop
int ICS::countLaptop(){
	return counter;
}

//using fstream to create a text file with the information of a student (i.e. grade, mark, etc)
void ICS::getTranscript(Student &k){
  int temp = 0;
	for(int i = 0; i<30; i++){
		if(sClass[i].equals(k))
			temp = i;
  }
  string m = k.toString();

  string tem = sClass[temp].getFirstName() + sClass[temp].getLastName();
  
  ofstream transcript;
  transcript.open (tem+".txt");
  transcript << m<<"\nClass: "<<classCode<<section<<"\nMark:" <<marks[temp]<<"\nLaptop Status: "<< hasLap[temp];
  transcript.close();
}

//printing class list
void ICS::printClass(){
	cout<<"Class info:"<<endl;
	cout<<"\tTeacher: "<<head.getFirstName()<<" "<<head.getLastName()<<endl;
	cout<<"\tClass Code: "<<classCode<<"-0"<<section<<endl<<"\tStudents w/ Laptop: "<<countLaptop()<<endl;
	cout<<"\tStudent List: "<<endl;

	for(int i = 0; i<countStudents(); i++){
		cout<<"\t\t"<<sClass[i].getFirstName()<<" "<<sClass[i].getLastName()<<", Mark:"<<marks[i]<<endl;
	}
	
}