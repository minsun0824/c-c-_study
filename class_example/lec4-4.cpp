#include<iostream>
using namespace std;

//function declartion
long calFact(int = 0);
int main() {
	int num1 = 0;
	int num2 = 0;
	cout << "enter the number?: ";
	cin >> num1;
	num2 = calFact(num1);
	cout << num2 << endl;
	cout << calFact() << endl;
}

long calFact(int num) {
	if (num == 0) {
		return 1;
	}
	else return num*calFact(num - 1);
}