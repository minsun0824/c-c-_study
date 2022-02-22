#include<iostream>
using namespace std;

/*
void func01() {
	throw "func01";
}

int main() {
	try { func01(); }

	catch (const char* ex) {
		cout << "exception at " << ex << endl;
	}
}
*/

void func03() {
	throw "func03";
}
void func02() {
	func03();
}
void func01() { func02(); }
int main() {
	try {
		func01();
	}
	catch (const char* ex) {
		cout << "Exception at " << ex << endl;
	}
}