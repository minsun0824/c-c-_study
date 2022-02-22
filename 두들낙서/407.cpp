# include <iostream>
#include <stdio.h>
using namespace std;

class Animal {
public:
	void Breathe() {
		cout << "breathing" << endl;
	}
	int age;
};

class Dog : public Animal {
public:
	void walk() {
		cout << "walking" << endl;
	}
};

class bird :public Animal {
public:
	void fly() {
		cout << "fly the sky" << endl;
	}
};

int main() {
	Dog d;
	d.age = 7;
	d.Breathe();
	d.walk();
	cout << d.age << endl;

	bird b;
	b.age = 3;
	b.Breathe();
	b.fly();
	cout << b.age << endl;
}