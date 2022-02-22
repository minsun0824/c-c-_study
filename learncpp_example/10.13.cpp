#include <iostream>
using namespace std;

class Lecture {
private:
	string m_name;
	int* m_pid;
	Student* p_student;
	Teacher* m_pteacher;
public:
	Lecture();
	Lecture(int, string);
	Lecture(int, string, Teacher*);
	string GetName() { return m_name; }
	void SetID(int id);
	string GetTeacherName();
};

Lecture::Lecture() {
	m_pid = new int(0);
	m_name = "";
}

Lecture::Lecture(int id, string name) {
	m_pid = new int(id);
	m_name = name;
}
Lecture::Lecture(int id, string name, Teacher* t) {
	m_pid = new int(id);
	m_name = name;
	this->m_pteacher = t;
}

string Lecture::GetTeacherName() {
	return this->m_pteacher->GetName();
}

class Student {
private:
	int* m_pid;
	string m_name;
	Lecture* m_Lname;
public:
	Student();
	Student(int, string);
	string GetName() { return m_name; }
	void SetID(int id);
};

Student::Student() {
	m_pid = new int(0);
	m_name = "ms";
}

Student::Student(int id, string name) {
	m_pid=new int (id)
}
