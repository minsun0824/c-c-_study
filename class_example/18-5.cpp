#include <iostream>
#include<memory>
using namespace std;


void swap(shared_ptr<int>& a, shared_ptr<int>& b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	//reference로 넣으면 count 1이고, 안넣으면 2.
	cout << "ref count of a: " << a.use_count() << endl;
	cout << "ref count of b: " << b.use_count() << endl;
}

int main() {
	shared_ptr<int> x(new int(10));
	shared_ptr<int> y(new int(20));

	cout << "ref count of x: " << x.use_count() << endl;
	cout << "ref count of y: " << y.use_count() << endl;

	swap(x, y);

	cout << "ref count of x: " << x.use_count() << endl;
	cout << "ref count of y: " << y.use_count() << endl;

	cout << *x << endl << *y << endl;
}