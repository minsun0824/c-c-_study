#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
protected:
	string m_name;
	int* m_Id;
public:
	Person() {
		m_Id = new int(1111); m_name = "None";
		cout << "Person constructor 1 called" << endl;
	};
	Person(int id) {
		m_Id = new int(id); m_name = "None";
		cout << "Person constructor 2 called" << endl;
	}
	~Person() { cout << "person destructor" << endl; }
	string GetName() { return m_name; };
	int GetID() { return *(this->m_Id); }
	void SetName(string name) { m_name = name; }
	void SetID(int id) { *(this->m_Id) = id; }
};
class Student : public Person {
private: //Nothing
public:
	string GetStudentName() { return this->m_name; }
	Student() : Person(10) { cout << "Student constructor called" << endl; };
	~Student() { cout << "student destructor " << endl; }
};
class Teacher : protected Person {
private: //Nothing
public:
	int GetTeacherID() { return this->GetID(); }
	Teacher() { cout << "Teacher constructor called" << endl; };
	~Teacher() { cout << "Teacher destrucotor" << endl; }
};
int main() {
	Teacher t;
	Teacher* t1 = new Teacher();
	delete t1;
	Person* p_person = new Student();
	delete p_person; //student destructor가 불려지지 않음
	return 0;
}