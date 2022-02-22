#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

using namespace std;
typedef struct { int a, b; } IntPair;

int main() {
	unique_ptr<int> x(new int(5));
	int* ptr = x.get(); // Return a pointer to pointed-to object
	int val = *x; // Return the value of pointed-to object
	cout << "(x addr, val): " << x << "\t" << *x << endl;
	cout << "(ptr addr, val): " << ptr << "\t" << *ptr << endl;

	// Access a field or function of a pointed-to object
	unique_ptr<IntPair> ip(new IntPair);
	ip->a = 100;

	// Deallocate current pointed-to object and store new pointer
	x.reset(new int(1));
	cout << "(x addr, val): " << x << "\t" << *x << endl;
	//cout << "(ptr addr, val): " << ptr << "\t" << *ptr << endl;

	ptr = x.release(); // Release responsibility for freeing
	//cout << "(x addr, val): " << x << "\t" << *x << endl;
	//cout << "(ptr addr, val): " << ptr << "\t" << *ptr << endl;
	delete ptr;
	return 0;
}