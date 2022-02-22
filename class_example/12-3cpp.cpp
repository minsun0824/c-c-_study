#include<iostream>
using namespace std;

class Person {
public:
	virtual void work()final;  //하위 클래스에서 override금지
};

class Student : public Person {
public:
	void work();  //불가능
};