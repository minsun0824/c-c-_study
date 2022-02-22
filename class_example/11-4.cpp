#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	virtual void work() = 0;
};

class Student : public Person {
public:
};

class Teacher :public Person {
public:
	void work(){}

};

int main() {
	Person p1;
	Student s1;
	Teacher t1;
}