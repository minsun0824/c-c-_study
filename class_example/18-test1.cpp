#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <memory>
#include<cstdlib>
using namespace std;

class A {
	int num;
public:
	A(int n) {
		num = n;
	}
	void show() {
		cout << "A show" <<num<< endl;
	}
};

int main() {
	shared_ptr<A> p1(new A(5));
	cout << p1.get() << endl;
	cout << p1.use_count() << endl;
	p1->show();
	shared_ptr<A> p2(p1);
	cout << p1.use_count() << endl;

	p2->show();
	cout << p1.get() << endl;
	cout << p2.get() << endl;


	cout << p1.use_count() << endl;
	cout << p2.use_count() << endl;

	p1.reset();
	cout << p1.get() << endl;
	cout << p2.use_count() << endl;
	cout << p2.get() << endl;
	
}