#include <iostream>
#include <string.h>
using namespace std;

class Base {
public:
	Base() { cout << "Base constructor" << endl; }
	Base(int a) { cout << "base constructor 1" << endl; }
};

class Derived : public Base {
public:
	Derived() :Base(10){
		cout << "derived constructor" << endl;
	}
};

int main() {
	Derived d;
}