#include<iostream>
using namespace std;
#include <exception>



int main() {
	int nSize;
	char* arr;
	cout << "Enter Array Size: ";
	cin >> nSize;
	try {
		arr = new char[nSize];
		cout << "Array (" << _msize(arr) << ") is created.";
		delete[] arr;
	}
	catch (bad_alloc& e) {
		cout << e.what() << endl;
	}
}