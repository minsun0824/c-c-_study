#include<iostream>
using namespace std;

int main() {
	try {
		//cout << "throw 3" << endl;
		//throw 3;
		//cout << "test" << endl;
		try {
			cout << "throw test" << endl;
			throw "test";

			cout << "throw 3.5" << endl;
			throw 3.5;
		}

		catch (int i) {
			cout << "catch int" << endl;
		}
		catch (const char* s) {
			cout << "catch char" << endl;
		}
	}

	catch (double d) {
		cout << "catch double" << endl;
	}

	catch (...) {
		cout << "catch all" << endl;
	}
}