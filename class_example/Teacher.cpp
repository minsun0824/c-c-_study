#include "Teacher.h"
#include <iostream>
#include <string>

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