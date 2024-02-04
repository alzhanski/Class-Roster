#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
#include "degree.h"
using namespace std;

class Student {
	public:
		const static int numOfCourses = 3;
	
	private:
		string studentID;
		int age;
		int daysToComplete[numOfCourses];
		string firstName;
		string lastName;
		string emailAddress;
		DegreeProgram Degree;

	public:		
		Student();
		Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram Degree);
		~Student();
		void SetStudentID(string ID);
		void SetAge(int age);
		void SetFirstName(string firstName);
		void SetLastName(string lastName);
		void SetEmail(string emailAddress);
		void SetDegree(DegreeProgram Degree);
		void SetDaysToComplete(int daysToComplete[]);
		void Print();
		int GetAge();
		int* GetDaysToComplete();
		string GetStudentID();
		string GetFirstName();
		string GetLastName();
		string GetEmailAddress();
		DegreeProgram GetDegree();
};

#endif // !STUDENT_H
