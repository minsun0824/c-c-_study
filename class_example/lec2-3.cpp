using namespace std;
#include <iostream>
#define PI 3.14;

int main() {
	double radius; //?? ????? ?
	double circum;
	for (;;) {
		cout << "enter the radius: ";
		cin >> radius;
		if (radius == 0) {
			break;
		}
		circum = radius * 2 * PI;
		cout << circum << endl;
	}


}