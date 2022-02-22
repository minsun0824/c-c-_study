#pragma once
#include <iostream>
#include <string>
#include "Student.h"
class Student;
using namespace std;
class Lecture {
private:
	int* m_pId;
	string m_name;
	Student* s_group; //A list of students
public:
	Lecture();
	Lecture(int, string);
	string GetName();
	void SetID(int id);
};