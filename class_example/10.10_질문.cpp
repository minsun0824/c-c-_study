#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student {
private:
	int* m_pid = nullptr;
	string m_name = "";
public:
	Student(int, string);
	~Student();
	Student(const Student& rhs) {
		m_pid = new int(*rhs.m_pid);
		m_name = rhs.m_name;
	}
	int GetID(){ return *(this->m_pid); }
	int *GetIDAddress() {
		return this->m_pid;
	}
	string GetName() {
		return m_name;
	}
	static int Studentcnt;

	void ShowTeacherHobby(Teacher t) {
		cout << GetTeacherHobby(t) << endl;
	}
};

int Student::Studentcnt = 0;

Student::Student(int id, string name) {
	m_pid = new int(id);
	m_name = name;
}



Student::~Student() {
	delete m_pid;
}

class Teacher {
	int* m_pid;
	string m_name;
	string teacher_hobby = "play a video game";
	friend string GetTeacherHobby(Teacher t) {
		return t.teacher_hobby;
	}
};
int main() {
	int iNum1 = 10;
	int iNum2{ iNum1 };
	Teacher t1;
	Student s1{ 201911021,"ms" };
	Student::Studentcnt++;
	Student s2(s1);
	Student::Studentcnt++;

	//static
	cout << Student::Studentcnt;

	//friend
	cout << GetTeacherHobby(t1) << endl;
	s1.ShowTeacherHobby(t1);
	
}