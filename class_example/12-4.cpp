#include<iostream>
using namespace std;

class Person {
public:
	virtual void work();
};

class Student final :public Person {
public:
	void work();
};

class DGISTStudent : public Student {  //class의 final은 더이상 상속을 받을 수 없다
public:
	void work(){}
};