#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{ 1,2,3,6 };
	vector<int>::iterator iter;

	for (iter = v.begin(); iter != v.end(); ++iter) {
		//if (*iter == 3) { iter = v.erase(iter); }
		cout << *iter << endl;
		*iter -= 1;
	}

	//cout << *iter << endl; 마지막 element의 다음 element를 가리키게 됨
	cout << *(--iter) << endl;

	vector<int>:: const_iterator citer{ iter };

	for (citer = v.begin(); citer != v.end(); ++citer) {
		cout << *citer << endl;
		//*citer -= 1;
	}
}