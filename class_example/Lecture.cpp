#pragma once
#include "Lecture.h"
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
	*(this->m_pId) = id;
}