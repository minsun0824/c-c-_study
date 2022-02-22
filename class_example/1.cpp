#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
protected:
	int* m_id;
	string m_name;
public:
	Person() {
		m_id = new int(1111); m_name = "none";
		cout << "Person constructor1" << endl;
	}
	Person(int id) {
		m_id = new int(id); m_name = "none";
		cout << "person constructor2" << endl;
	}
	string GetName() { return m_name; }
	void SetName(string name) { m_name = name; }
	int GetID(int id) { return *m_id; }
	void SetID(int id) { *m_id = id; }
	virtual void work() { cout << "Person work" << endl; }
	virtual string GetClassName() { return "Person"; }
	virtual ~Person() { cout << "person destructor" << endl; }

};

class Student : public Person {
public:
	Student() :Person(10) {
		cout << "student constructor" << endl;
	}
	string GetStudentName() { return m_name; }
	void work() { cout << "Student studies" << endl; }
	string GetClassName() { return "Student"; }
	~Student() {
		cout << "student destructor" << endl;
	}
};

class Teacher :public Person {
public:
	Teacher() {
		cout << "teacher constructor" << endl;

	}
	void SetTeacherName(string name) { SetName(name); }
	void work() { cout << "Teacher teaches" << endl; }
	string GetClassName() { return "Teacher"; }
	~Teacher() { cout << "Teacher destructor" << endl; }
};

class DGISTstudent :public Student {
public:
	DGISTstudent() {
		cout << "DGIST student constructor" << endl;

	}
	void work() { cout << "DGIST student studies" << endl; }
	string GetClassName() { return "DGIST student"; }
	~DGISTstudent() {
		cout << "DGIST student destructor" << endl;
	}
};

int main() {
	// ____________________1_____________________________
	Student s1; //person constructor2, student constructor
	Teacher t1; //person constructor1, student constructor
	s1.work(); //student studies
	t1.work();// teacher teaches
	cout << s1.GetClassName() << endl; //student
	cout << t1.GetClassName() << endl; //teacher
	Person* p_arr[] = { &s1, &t1 };
	p_arr[0]->work(); //student studies
	cout << p_arr[0]->GetClassName() << endl; //student
	p_arr[1]->work(); //teachet teaches
	cout << p_arr[1]->GetClassName() << endl; //teacher

	DGISTstudent ds1;
	//person constructor2,student constructor, DGIST student constructor
	Person* s2 = &ds1;
	s2->work(); //DGIST students studies
	cout << s2->GetClassName() << endl; //DGIST student
	//DGIST student destructor
	//student destructor
	//person destructor
	//teacher destructor
	//person destructor
	// student destructor
	//person destructor
	

	/*
	//----------------------2------------------
	Teacher* t1 = new Teacher();
	delete t1;
	Person* p_person = new Student();
	delete p_person;


	return 0;
	*/

}