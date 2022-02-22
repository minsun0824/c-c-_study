#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Lecture.h"
using namespace std;
int main() {
	Student s1(201911999, "Alice");
	Teacher t1(111111111, "Tom");
	Lecture l1(222222222, "OOP");
	cout << s1.GetName() << endl
		;
	cout << t1.GetName() << endl;
	cout << l1.GetName() << endl
		;
	return 0;
}