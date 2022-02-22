#include <iostream>
using namespace std;

int main() {

	//1
	int* ptr;
	ptr = new int;
	*ptr = 123;
	cout << ptr << endl;
	cout << *ptr << endl;


	//2
	int* p = new int(123);
	cout << p << endl;
	cout << *p << endl;

}