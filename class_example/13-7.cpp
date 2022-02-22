#include<iostream>

#include <exception>
using namespace std;



class MyException : public exception {
public:
	virtual const char* what() const noexcept {
		return "my exception";
	}
};

int main() {
	try {
		throw MyException{};
	}
	catch (exception& e) {  //upcasting
		cout << e.what();
	}
}
