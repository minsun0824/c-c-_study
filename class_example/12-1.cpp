#include<iostream>
using namespace std;

class Person {
protected:
	int* m_Id;
	string m_name;
public:
	Person() { m_Id = new int(1111); m_name = "None"; }
	Person(int id) { m_Id = new int(id); m_name = "None"; }
	string GetName() { return m_name; };
	int GetID() { return *m_Id; }
	void SetName(string name) { m_name = name; }
	void SetID(int id) { *m_Id = id; }
	virtual void work() { cout << "Person Work" << endl; }
	virtual string GetClassName() { return "Person"; }
	 ~Person() { cout << "Person Destructor called" << endl; }
};
class Student : public Person {
public:
	Student() : Person(10) {};
	string GetStudentName() { return this->m_name; }
	void work() { cout << "Student studies" << endl; }
	string GetClassName() { return "Student"; }
	~Student() { cout << "Student Destructor called" << endl; }
};

class Teacher : public Person {
public:
	Teacher() {};
	int GetTeacherID() { return this->GetID(); }
	void SetTeacherName(string new_name) { this->SetName(new_name); }
	string GetTeacherName() { return this->GetName(); }
	void work() { cout << "Teacher teaches" << endl; }
	string GetClassName() { return "Teacher"; }
	~Teacher() { cout << "Teacher Destructor called" << endl; }
};

class DGISTStudent : public Student {
public:
	void work() { cout << "DGIST students studies" << endl; }
	string GetClassName() { return "DGISTStudent"; }
	~DGISTStudent() { cout << "DGISTStudent Destructor called" << endl; }
};

int main() {
	/*
	Student s1;
	Teacher t1;
	s1.work();
	cout << s1.GetClassName() << endl;
	t1.work();
	cout << t1.GetClassName() << endl;
	*/
	
	/*
	Student s1;
	Teacher t1;
	Person* p_arr[] = { &s1, &t1 };
	for (int i = 0; i < 2; i++) {
		p_arr[i]->work();
		cout << p_arr[i]->GetClassName() << endl;
	}
	*/
	
	

	Teacher* t1 = new Teacher();
	delete t1;
	Person* p_person = new Student(); //Upcasting
	  //virtual을 붙여주지 않으면 upcasting에 대한 destructor는 불려지지 않음
	
	
	Person* s2 = new DGISTStudent();
	s2->work();
	
	//cout << s2->GetClassName() << endl; 

	return 0; 
}

