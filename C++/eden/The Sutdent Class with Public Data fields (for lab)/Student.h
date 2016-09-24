#ifndef STUDENT_H
#define STUDENT_H
 
#include <iostream>

using namespace std;

class Student
{
	public:
		Student(int, const char*, int);
		Student();
		
		char* name_;
		
		friend void set(Student*, int, const char*, int);
		friend void print(Student);
	
	private:
		int id_;
		
		int age_;
};

Student::Student(int id, const char* name = "default", int age = 0):id_(id), age_(age)
{
	name_ = new char[strlen(name) + 1];
	int i = 0;
	
	for(; i < strlen(name); i++)
	{
		name_[i] = name[i];
	}
	
	name_[i] = '\0';
}	

Student::Student():id_(0), age_(0)
{
	name_ = new char[8];
	char tmp[8] = "default";
	
	int i = 0;
		
	for(; i < 8; i++)
	{
		name_[i] = tmp[i];
	}
}

void set(Student* st, int id, const char* name, int age)
{
	st -> age_ = age;
	st -> id_ = id;
	
	int i = 0;
	
	delete [](st -> name_);
	
	st -> name_ = new char[strlen(name) + 1];
		
	for(; i < strlen(name); i++)
	{
		st -> name_[i] = name[i];
	}

	st -> name_[i] = '\0';
}

void print(Student st)
{
	cout << st.name_ << '(' << st.id_ << ')' << " is " << st.age_ << " years old." << endl;
}

#endif