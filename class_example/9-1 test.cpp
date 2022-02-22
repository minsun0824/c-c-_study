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
	int Get_ID() { return *(this->m_pid); }
	int* Get_ID_Addr() { return this->m_pid; }
	string GetName() { return this->m_name; }
	Student(const Student& rhs) {
		this->m_pid = new int(*rhs.m_pid);
		this->m_name = rhs.m_name;
	}
};

Student::Student(int id, string name) : m_pid{ new int{id} }, m_name{name}{}
Student::~Student() { delete m_pid; }

int main() {
	int iNum1 = 10;
	int iNum2{ iNum1 };
	Student s1{ 201911021,"ms" };
	Student s2(s1);
	cout << "s1: " << s1.GetName() << " "
		<< s1.Get_ID() << " " << s1.Get_ID_Addr() << endl;
	cout << "s2: " << s2.GetName() << " "
		<< s2.Get_ID() << " " << s2.Get_ID_Addr() << endl;
}