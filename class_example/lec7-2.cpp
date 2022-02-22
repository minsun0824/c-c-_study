#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student {
private:
	int* m_pID;
	string m_name;
public:
	Student();
	Student(int, string);
	int GetID() {return *m_pID;} //역참조를 통해서 id접근

	string GetName() {
		return m_name;
	}
	~Student();
};

Student::Student() {
	m_pID = new int(0);
	m_name = "minsun";
	cout << "constructor" << endl;
}

Student::Student(int id, string name) {
	m_pID = new int(id);
	m_name = name;
	cout << "constructor" << endl;
}

Student::~Student() {
	delete m_pID;
	cout << "destructor";
}


int main() {
	//Student* student1;
	//student1 = new Student(); //constructor 호출'
	cout << "test1" << endl; //constructor가 언제 호출되는지 보기
	Student* student2 = new Student{ 201911021,"ms" };
	cout << "test2" << endl;
	//cout << (*student1).GetID() << endl;
	cout << student2->GetID() << endl;
	delete student2;

	Student student3(202011111, "cw");
	cout << student3.GetID() << endl;
	cout << student3.GetName() << endl;
}