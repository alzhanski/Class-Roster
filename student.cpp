#include <iostream>
#include <string>
#include "student.h"


using namespace std;


Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < numOfCourses; ++i) {this->daysToComplete[i] = 0;}
	this->Degree = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram Degree)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < numOfCourses; ++i) { this->daysToComplete[i] = daysToComplete[i]; }
	this->Degree = Degree;

}
Student::~Student() {}

void Student::SetStudentID(string studentID)
{
	this->studentID = studentID;
}

void Student::SetAge(int age)
{
	this->age = age;
}

void Student::SetDaysToComplete(int daysToComplete[])
{
	for (int i = 0; i < numOfCourses; ++i) { this->daysToComplete[i] = daysToComplete[i]; }
}

void Student::SetFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::SetLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::SetEmail(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::SetDegree(DegreeProgram Degree)
{
	this->Degree = Degree;
}

string Student::GetStudentID() 
{
	return this->studentID;
}

int Student::GetAge() 
{
	return this->age;
}

string Student::GetFirstName() 
{
	return this->firstName;
}

string Student::GetLastName()
{
	return this->lastName;
}

string Student::GetEmailAddress() 
{
	return this->emailAddress;
}

int* Student::GetDaysToComplete()
{
	return this->daysToComplete;
}


DegreeProgram Student::GetDegree()
{
	return this->Degree;
}

void Student::Print()
{
	cout << "Student ID:";
	cout << this->GetStudentID() << "\tFirst: ";
	cout << this->GetFirstName() << "\tLast: ";
	cout << this->GetLastName() << "\tAge: ";
	cout << this->GetAge() << "\t\t{ ";
	cout << this->GetDaysToComplete()[0] << ", " << this->GetDaysToComplete()[1] << ", " << this->GetDaysToComplete()[2] << " }\t\tDegree Program:";
	cout << DegreeProgramStrings[GetDegree()] << endl;
	
}