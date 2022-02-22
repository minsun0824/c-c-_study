#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student {
private:
	int* m_pid = nullptr;
	string m_name = "";
	
public:
	static int StudentCnt;
	Student(int, string);
	~Student();
	int GetID() const { return *(this->m_pid); }
	int* GetIDAdd() { return this->m_pid; }
	string GetName() const {  
		this->GetID();
		return this->m_name;
	}
	void Set_Name(string newName)  { this->m_name = newName; }
	Student(const Student& rhs) {
		this->m_pid = new int(*rhs.m_pid);
		this->m_name = rhs.m_name;
	}
	void ShowTeacherHobby(Teacher t) {
		cout << GetTeacherHobby(t) << endl;
	}
};

Student::Student(int id,string name): m_pid{new int(id)}, m_name{name}{}
Student::~Student() { delete m_pid; }
int Student::StudentCnt = 0;

class Teacher {
private:
	int* m_pid;
	string m_name;
	string teacher_hobby = "play a video game";
	friend string GetTeacherHobby(Teacher t) {
		return t.teacher_hobby;
	}
public:
	friend class Student;
};

int main() {
	int iNum1 = 10;
	int iNum2{ iNum1 };
	Student s1(201911021, "minsun");
	Teacher t1;
	Student::StudentCnt++;
	Student s2{ s1 };
	Student::StudentCnt++;

	cout << "s1: " << s1.GetID() << " " << s1.GetIDAdd() << " " << s1.GetName() << endl;
	cout << "s2: " << s2.GetID() << " " << s2.GetIDAdd() << " " << s2.GetName() << endl; //runtime error 발생. 이미 deallocation 했는데, s2에서 또해서
	cout << Student::StudentCnt << endl;

	cout << GetTeacherHobby(t1) << endl;
	s1.ShowTeacherHobby(t1);
	
}