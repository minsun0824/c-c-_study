#include <iostream>
#include <stdio.h>
using namespace std;

class Base {
public: 
	Base(int a) {
		cout << "Base(int)" << endl;
	}
};

class Derived :public Base {
public:
	Derived() :Base(5) {
		cout << "Derived()" << endl;
	}
};

int main() {
	Derived d;
}