#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	cout << "At 0: " << v1.at(0) << "\tAt 1: " << v1.at(1) << endl;
	cout << "Front" << v1.front() << "\tBack" << v1.back() << endl;
	cout << "V1 capacity " << v1.capacity() << "\tV1 Size : " << v1.size() << endl;
	vector<int> v2(v1);
	cout << "V2 capacity " << v2.capacity() << "\tV2 Size: " << v2.size() << endl;

	v1[0] = 3;
	v1.pop_back();

	cout << "first loop" << endl;
	for (int& a : v1) {
		cout << a << " ";
	}
	v1.push_back(4);
	cout << "\nsecond loop" << endl;
	for (int& a : v1) {
		cout << a << " ";
	}
	v1.clear();
	cout << "\nthird loop" << endl;
	for (int& a : v1) {
		cout << a << " ";
	}


}