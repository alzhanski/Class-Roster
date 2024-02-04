#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
class Roster {
	private:
		int idx = -1;
		const static int classSize = 5;
		Student* classRosterArray[classSize];
	public:
		void parse(string studentData);
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram Degree);
		void remove(string studentID);
		void printAll();
		void printAverageDaysInCourse();
		void printInvalidEmails();
		void printByDegreeProgram(DegreeProgram Degree);
		~Roster();
};

#endif // !ROSTER_H
