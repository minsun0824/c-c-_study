#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
	
	
protected:
	int* m_id;
	string m_name;
public:
	string GetName() { return m_name; }
	virtual string GetStudentName() = 0;
	int Getid() { return *this->m_id; }
	void SetName(string name) { m_name = name; }
	void Setid(int id) { *this->m_id = id; }
	Person() { m_id = new int(1111); m_name = "none"; }
};

class Student :public Person {
private:
public:
	string GetStudentName() { return this->m_name; }
};

class Teacher : public Person {
private:
public:
	int GetTeacherID() { return this->Getid(); }
	void SetTeacherName(string name) { this->SetName(name); }
	string GetTeacherName() { return this->GetName(); }
	string GetStudentName() { return this->GetName(); }
};

/*
int main() {
	Student s1;
	Teacher t1;
	s1.SetName("minsun");
	//1.SetName("cw");
	t1.SetTeacherName("Jenny");
	cout << s1.GetStudentName() << endl;
	cout << t1.GetTeacherName() << endl;
}
*/

int main() {
	Student s1;
	Teacher t1;
	s1.SetName("Tom");
	s1.Setid(5555);
	t1.SetName("Jenny");
	t1.Setid(6666);
	Person* p_arr[] = { &s1, &t1 };
	for (int i = 0; i < 2; i++) {
		cout << p_arr[i]->Getid() << "\t" << p_arr[i]->GetName()<< endl;
	}
	cout << p_arr[0]->GetStudentName() << endl; //Error
	//cout << p_arr[1]->GetTeacherID() << endl; //Error
	return 0;
}