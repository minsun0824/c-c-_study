#include<iostream>
#include <exception>
using namespace std;

void MyErrorHandler() {
	std::cout << "Error anyway";
	exit(-1);
}
int main() {
	set_terminate(MyErrorHandler);
	try {
		throw 3;
	}
	catch (int i) {
		cout << i << endl;
	}
}