

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*foward declaration
*/
class Lecture;
class Teacher;
class Student;


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

Lecture::Lecture() {
	m_pId = new int(0);
	m_name = "Alice";
}
Lecture::Lecture(int id, string name) {
	m_pId = new int(id);
	m_name = name;
}
string Lecture::GetName() {
	return m_name;
}
void Lecture::SetID(int id) {
	*this->m_pId = id;
}


class Student {
private:
	int* m_pid;
	string m_name;
	Lecture* m_IName;

public:
	Student();
	Student(int, string);
	string GetName();
	void SetID(int id);
};


Student::Student() {
	m_pid = new int(0);
	m_name = "minsun";
}

Student::Student(int id, string name) {
	m_pid = new int(id);
	m_name = name;
}

string Student::GetName() {
	return m_name;
}

void Student::SetID(int id) {
	*(this->m_pid) = id;
}

class Teacher {
private:
	int* m_pId;
	string m_name;
	Lecture* m_lecture;
public:
	Teacher();
	Teacher(int, string);
	string GetName();
	void SetID(int id);
};

Teacher::Teacher() {
	m_pId = new int(0);
	m_name = "Alice";
}
Teacher::Teacher(int id, string name) {
	m_pId = new int(id);
	m_name = name;
}
string Teacher::GetName() {
	return m_name;
}
void Teacher::SetID(int id) {
	*(this->m_pId) = id;
}
