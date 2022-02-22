#include <iostream>
using namespace std;

main() {

int studentID[][3] = { {1 }, {4, 5, 6} };
cout << studentID[0][0] << endl;
cout << studentID[0][1] << endl;
cout << studentID[0][2] << endl;
cout << studentID[1][0] << endl;
cout << studentID[1][1] << endl;
cout << studentID[1][2] << endl;
cout << sizeof(studentID) << endl;
cout << sizeof(studentID[0]) << endl;
}