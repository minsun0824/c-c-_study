#include <iostream>
#include <string.h>
using namespace std;

class Person {

};

class Employee :public Person {
public:
	string FirstName;
	string LastName;
	double salary;
	Employee(string f, string l, double sal) {
		FirstName = f;
		LastName = l;
		salary = sal;
	}

	void show() {
		cout << "First Name:" << FirstName << "\t Last Name:" << LastName
			<< "\t" << salary<<endl;
	}

	void addBonus(double bonus) {
		salary += bonus;
	}
};

class Manager :public Employee {
public:
	double commision;
	Manager(string f, string l, double sal, double com) :Employee(f, l, sal) {
		commision = com;
	}

	double getcomm() {
		return commision;
	}
};

class Clerk :public Employee {
private:
	Manager* manager;
public:
	
	Clerk(string f, string l, double sal, Manager* man) :Employee(f, l, sal) {
		manager = man;
	}
	Manager* getManager() { return manager; }
};

void congratulate(Employee* emp) {
	cout << "Happy Birthday!!" << endl;
	emp->addBonus(200);
	emp->show();
}

int main() {
	Employee* emp;
	Manager m1("kim", "minsun", 3000, 0.2);
	Clerk c1("kang", "chanwoong", 1000, &m1);

	//upcasting
	emp = &m1;

	//이건 괜찮음
	cout << emp->FirstName << endl; //kim
	cout << emp->LastName << endl;//minsun

	//이건 안괜찮음. manager에만 있는 함수는 사용할 수 없게 됨.
	//cout << emp->GetComm();

	congratulate(&c1); 
	congratulate(&m1);

	cout << "Manager of " << c1.FirstName << " is " << c1.getManager()->FirstName << endl;
}