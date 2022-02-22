#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v{ 1,2,3,4 };
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << endl;
	}

	for (auto iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << endl;
	}

	for (auto& e : v) {
		cout << e << endl;
	}
}