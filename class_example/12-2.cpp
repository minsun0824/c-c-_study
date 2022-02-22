#include<iostream>
using namespace std;

class Person {
public:
	virtual void work() = 0;  // 무조건 implement 해야 함
};

class Student : public Person {
public:
	void work(){}
};

class Teacher : public Person {
public:
	void work(){}
};

int main() {
	Person p1; //error due to the pure function
	Student s1;  //error due to no implementation of the pure function
	Teacher t1;
}