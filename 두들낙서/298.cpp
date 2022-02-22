# include <iostream>
#include <stdio.h>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "my address is: " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "object address is: " << &a <<" "<<&b<< endl;

	a.PrintThis();
	b.PrintThis();

}