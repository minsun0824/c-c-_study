#include<iostream>
using namespace std;


class MyException {
	int errNo;
	string errFunc, errMsg;
public:
	MyException(int n, string f,string m):errNo{n},errFunc{f},errMsg{m}{}
	virtual ~MyException(){}

	void what() {
		cout << "Error [" << errNo << "]:" << errMsg << " at" << errFunc << endl;
	}
};

class MyDividByZero :public MyException {
public:
	MyDividByZero(string f) :MyException(100, f, "divide by zero") {}

};

int main() {
	int n1{ 10 }, n2{ 0 };
	cin >> n2;
	try {
		if (n2 == 0) {
			//throw MyException(100, "main()", "Zero");
			throw MyDividByZero("main()"); //TEST
		}
		cout << n1 / n2 << endl;
	}
	catch (MyException& e) {
		e.what();
	}
}