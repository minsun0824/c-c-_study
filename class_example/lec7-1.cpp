#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct student {
	int id;
	string name;
};


int main() {
	student students[10];
	student* student1 = new student{ 201911021,"ms" };

	students[0].id = 201911022;
	cout << students[0].id << endl;

	cout << (*student1).name << endl;
	cout << student1->id << endl;
	cout << sizeof(student) << endl;
	string temp = student1->name;
	cout << temp <<" "<< student1->name << endl;

	temp = "md";
	cout << temp << " " << student1->name<<endl;
	return 0;
}

