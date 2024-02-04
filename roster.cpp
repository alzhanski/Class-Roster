#include <iostream>
#include <string>
#include "roster.h"


using namespace std;

void Roster::parse(string studentData)
{
		size_t rhs = studentData.find(",");
		string studentID = studentData.substr(0, rhs);
		

		size_t lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string firstName = studentData.substr(lhs, rhs - lhs); 

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string lastName = studentData.substr(lhs, rhs - lhs); 
;

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string email = studentData.substr(lhs, rhs - lhs); 


		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int studentAge = stoi(studentData.substr(lhs, rhs - lhs)); 
	
		
		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysCourse1 = stoi(studentData.substr(lhs, rhs - lhs));
	

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysCourse2 = stoi(studentData.substr(lhs, rhs - lhs)); 

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysCourse3 = stoi(studentData.substr(lhs, rhs - lhs)); 

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string str_degree = studentData.substr(lhs, rhs - lhs);
		DegreeProgram degree = SOFTWARE;
		if (str_degree == "SECURITY") { degree = SECURITY; }
		else if (str_degree == "NETWORK") { degree = NETWORK; }
		else if (str_degree == "SOFTWARE") { degree = SOFTWARE; }

		add(studentID, firstName, lastName, email, studentAge, daysCourse1, daysCourse2, daysCourse3, degree);
}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram Degree)
{	
	 int daysToComplete[3] = { daysCourse1, daysCourse2, daysCourse3 };
	 classRosterArray[++idx] = new Student(studentID, firstName, lastName, emailAddress, studentAge, daysToComplete, Degree);
	
} 

void Roster::printAll()
{
	for (int i = 0; i < classSize; ++i) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl << endl;
}


void Roster::remove(string studentID)
{
	cout << "Removing " << studentID << endl;
	bool foundStudent = false;
	for (int i = 0; i <= idx; ++i) {
		if (classRosterArray[i] == nullptr) {
			continue;
		}
		else if (classRosterArray[i]->GetStudentID() == studentID) {
			classRosterArray[i] = nullptr;
			foundStudent = true;
			break;
		}
	}

	if (!foundStudent) {
		cout << "Student was not found" << endl;
	}
	cout << endl << endl;
}


void Roster::printAverageDaysInCourse()
{
	for (int i = 0; i < classSize; ++i) {
			cout << "Student ID: " << classRosterArray[i]->GetStudentID() << ", average days in course is: ";
			cout << (classRosterArray[i]->GetDaysToComplete()[0] + classRosterArray[i]->GetDaysToComplete()[1] + classRosterArray[i]->GetDaysToComplete()[2]) / 3 << endl;
	}
	cout << endl << endl;
}

void Roster::printInvalidEmails()
{
	string emailAddress;
	cout << "Displaying invalid emails: " << endl;
	bool Invalid = false;
	for (int i = 0; i < classSize; ++i) {
		emailAddress = (classRosterArray[i]->GetEmailAddress());
		if ((emailAddress.find('@') == string::npos || emailAddress.find('.') == string::npos) || (emailAddress.find(' ') != string::npos))
		{
			Invalid = true;
			cout << "\t>" << emailAddress << endl;
		}
	}
	if (!Invalid) {
		cout << "No invalid email addresses" << endl;
	}
	cout << endl << endl;
}

void Roster::printByDegreeProgram(DegreeProgram Degree)
{
	cout << "Printing students by program: " << DegreeProgramStrings[Degree] << endl;
	for (int i = 0; i < classSize; ++i) {
		if (Roster::classRosterArray[i]->GetDegree() == Degree) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl << endl;
}

Roster::~Roster()
{
	cout << "Destructor called: " << endl;
	for (int i = 0; i < classSize; ++i) {
		cout << "\t>Deleting object: #" << i + 1 << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
	cout << "DONE" << endl;
	cout << endl << endl;
}
