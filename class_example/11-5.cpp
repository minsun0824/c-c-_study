#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
	int* m_Id;
	string m_name;
public:
	Person() {
		m_Id = new int(1111); m_name = "None"; cout
			<< "Person constructor 1 called" << endl;
	};
	Person(int id) {
		m_Id = new int(id); m_name = "None"; cout
			<< "Person constructor 2 called" << endl;
	}
	virtual ~Person() { cout << "Person Destructor called" << endl; }
};
class Student : public Person {
public:
	Student() : Person(10) {
		cout << "Student constructor called"
			<< endl;
	};
	~Student() { cout << "Student Destructor called" << endl; }
};
class Teacher : public Person {
public:
	Teacher() { cout << "Teacher constructor called" << endl; }
	~Teacher() { cout << "Teacher Destructor called" << endl; }
};

int main() {
	Teacher* t1 = new Teacher();
	delete t1;
	Person* p_person = new Student(); //Upcasting
	delete p_person;
	return 0;
}