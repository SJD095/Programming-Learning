#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int Student::numStudents = 0;

Student::Student(const char * nPtr)
{
	grades = new int[1];
	grades[0] = 0;
	numGrades = 0;
	
	name = new char[strlen(nPtr) + 1];
	for (int i = 0; i < strlen(nPtr); i++)
		name[i] = nPtr[i];
	name[strlen(nPtr)] = '\0';
	++numStudents;
}

Student::~Student()
{
	cout << name << " has been deleted" << endl;
	
	delete []name;
	delete []grades;
	--numStudents;
}

void Student::displayGrades() const
{
	int tmp = numGrades, i = 0;
	
	while(i != tmp)
	{
		cout << grades[i] << " ";
		++i;
	}
	
	cout << endl;
}

Student & Student::addGrade(int grade)
{
	auto tmp = grades;
	
	if(numGrades == 0)
	{
		grades[0] = grade;
		numGrades = 1;
		return *this;
	}
	
	grades = new int[numGrades + 1];
	for(int i = 0; i < numGrades; i++)
	{
		grades[i] = tmp[i];
	}
	
	grades[numGrades] = grade;
	numGrades++;

	delete []tmp;
	
	return *this;
}

int Student::getNumStudents()
{
	return numStudents;
}