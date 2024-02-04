# Class Roster Project

## Overview

Welcome to the Class Roster Project, a C++ program designed to manage and organize student information within a class. This project includes functionality to handle invalid email entries, calculate average days in a course, and print students based on their degree program.

## Class Definitions

### 1. Degree.h

- **Description:** Defines the `Degree` enum and an array of corresponding strings for degree program representation.
- **Header File:** [Degree.h](./Degree.h)

### 2. Student.h

- **Description:** Declares the `Student` class, which represents individual students with various attributes such as ID, name, email, age, days to complete courses, and degree program.
- **Header File:** [Student.h](./Student.h)
- **Methods:**
  - `SetStudentID(string ID)`: Set student ID.
  - `SetAge(int age)`: Set student age.
  - `SetDaysToComplete(int daysToComplete[])`: Set days to complete courses.
  - `SetFirstName(string firstName)`: Set student first name.
  - `SetLastName(string lastName)`: Set student last name.
  - `SetEmail(string emailAddress)`: Set student email.
  - `SetDegree(DegreeProgram Degree)`: Set student degree program.
  - `GetStudentID()`: Get student ID.
  - `GetAge()`: Get student age.
  - `GetDaysToComplete()`: Get days to complete courses.
  - `GetFirstName()`: Get student first name.
  - `GetLastName()`: Get student last name.
  - `GetEmailAddress()`: Get student email.
  - `GetDegree()`: Get student degree program.
  - `Print()`: Print student details.

### 3. Roster.h

- **Description:** Declares the `Roster` class, responsible for managing a class roster array and performing operations like parsing data, adding students, removing students, printing all students, calculating average days in a course, printing invalid emails, and printing students by degree program.
- **Header File:** [Roster.h](./Roster.h)
- **Methods:**
  - `parse(string studentData)`: Parse student data and add to the roster.
  - `add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram Degree)`: Add a new student to the roster.
  - `remove(string studentID)`: Remove a student from the roster.
  - `printAll()`: Print details of all students in the roster.
  - `printAverageDaysInCourse()`: Print the average days in a course for each student.
  - `printInvalidEmails()`: Print invalid email addresses in the roster.
  - `printByDegreeProgram(DegreeProgram Degree)`: Print students based on their degree program.
  - `~Roster()`: Destructor to clean up memory.

### 4. main.cpp

- **Description:** Contains the main function to demonstrate and test the functionality of the Class Roster Project.
- **Source File:** [main.cpp](./main.cpp)

## Getting Started

1. Clone the repository.
2. Compile the C++ code using your preferred compiler.
3. Run the executable to manage and explore the class roster with the enhanced functionalities.

Feel free to customize and extend this project to meet your specific requirements.

---
