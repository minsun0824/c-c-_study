
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student {
private:
	int *id;
	string name;
public:
	int GetID() { return *id; }
	Student() {
		id = new int(0);
		name = "alice";
	}
	Student(int id, string name) {
		this->id = new int(id);
		this->name = name;
	}
	~Student() {
		delete id;
	}
};

int main() {
	Student* student1;
	student1 = new Student{ 201911999, "John" };
	cout << (*student1).GetID() << endl;
	cout << student1->GetID() << endl;
	delete student1;
}