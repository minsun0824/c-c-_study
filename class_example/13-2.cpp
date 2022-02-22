#include<iostream>
using namespace std;

int main() {
	int age;
	string name;
	
	try {
		cout << "your name?";
		cin >> name;
		if (name.length() > 10)throw name;

		cout << "your age? ";
		cin >> age;
		if (age < 0 || age >= 150)
			throw age;
		cout << "Age: " << age;
	}

	catch (int i) {
		cout << "age " << age << "is not valid";
	}

	catch (string s) {
		cout << "name " << name << " is not valid";
	}
}