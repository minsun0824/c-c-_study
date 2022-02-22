#include<iostream>
using namespace std;

int main() {
	int age;
	cout << "your age?";
	cin >> age;
	if (age < 0 || age >= 150)
		throw age;

	cout << "Age:" << age;
}

