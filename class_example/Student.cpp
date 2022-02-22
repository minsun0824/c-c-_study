#include "Student.h"
#include <iostream>

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