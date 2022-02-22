#pragma once
#include "Lecture.h"
#include <string>
class Lecture;
using namespace std;
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
