#include <iostream>
#include <fstream> 
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "SchoolClass.h"
#include "ICS.h"
using namespace std;

int main() {
  //initializing students	
  Student Rohan("Rohan", "Vedula", "532 Winnards Perch Way", 11, "s332725308");
  Student John("John", "Doe");
  Student Bob("Bob", "Teen");
  cout<<Rohan.toString()<<endl<<endl;

  //initializing teachers
  Teacher Hudson("Benjamin", "Hudson", "Math, ICS", "c33333");
  cout<<Hudson.toString()<<endl;
  
  //marking students late
  Hudson.markStudentLate(Rohan);
  Hudson.markStudentLate(Rohan);
  cout<<"Student has "<<Rohan.getNumLates()<<" lates."<<endl;

  //creating one ICS class and adding students to the class
  ICS one(Hudson, "ICS4U", 1);
  one.addStudent(Rohan);
  one.addStudent(John);

  //marking students with laptops, changing marks of students and getting transcript as a text file
  one.hasLaptop(Rohan, true);
  one.setMark(Rohan, 67);
  one.getTranscript(Rohan);

  //printing class
  one.printClass();
  cout<<"Is student in class: "<<one.inClass(John)<<endl;
  

}