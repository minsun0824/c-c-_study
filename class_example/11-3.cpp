#include <iostream>
#include <string.h>
using namespace std;

class Person {
protected:
	int* m_Id;
	string m_name;
public:
	Person() { m_Id = new int(1111); m_name = "None"; };
	Person(int id) { m_Id = new int(id); m_name = "None"; }
	string GetName() { return m_name; };
	int GetID() { return *m_Id; }
	void SetName(string name) { m_name = name; }
	void SetID(int id) { *m_Id = id; }
	virtual void work() { cout << "Person Work" << endl; }
	virtual string GetClassName() { return "Person"; }
};
class Student : public Person {
public:
	Student() : Person(10) {};
	string GetStudentName() { return this->m_name; }
	void work() { cout << "Student studies" << endl; }
	string GetClassName() { return "Student"; }
};

class Teacher : public Person {
public:
	Teacher() {};
	int GetTeacherID() { return this->GetID(); }
	void SetTeacherName(string new_name) { this->SetName(new_name); }
	string GetTeacherName() { return this->GetName(); }
	void work() { cout << "Teacher teaches" << endl; }
	string GetClassName() { return "Teacher"; }
};

class DGISTstudent :public Student {
public:
	void work() { cout << "DGIST student studies" << endl; }
	string GetClassName() { return "DGIST student"; }
};

int main() {
	/*
	Student s1;
	Teacher t1;
	s1.work();
	t1.work();
	cout << s1.GetClassName() << endl;
	cout << t1.GetClassName() << endl; 
	Person* p_arr[] = { &s1, &t1 };
	p_arr[0]->work();
	cout << p_arr[0]->GetClassName() << endl;
	p_arr[1]->work();
	cout << p_arr[1]->GetClassName() << endl;
	
	DGISTstudent ds1;
	Person* s2 = &ds1;
	s2->work();
	cout << s2->GetClassName() << endl;
	return 0;
	*/


	
	Student s1;
	Teacher t1;
	s1.SetName("Tom");
	s1.SetID(5555);
	t1.SetName("Jenny");
	t1.SetID(6666);
	Person* p_arr[] = { &s1,&t1 };

	/*upcasting
	Person* p_arr[] = { &s1,&t1 };
	for (int i = 0; i < 2; i++) {
		cout << p_arr[i]->GetID() << " " << p_arr[i]->GetName() << endl;

	}
	*/
	

	//down casting
	cout << ((Student*)p_arr[0])->GetStudentName() << endl;
	cout << ((Teacher*)p_arr[0])->GetTeacherID() << endl;
	cout << ((Teacher*)p_arr[1])->GetTeacherID() << endl;
	cout << ((Student*)p_arr[1])->GetStudentName() << endl;
	
	return 0;
}