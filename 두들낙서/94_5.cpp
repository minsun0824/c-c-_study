# include <iostream>
using namespace std;

int main() {
	int n;
	cout << "input number: ";
	cin >> n;
	for (int i = n; i > 0 ; i--) { //반대로 카운트 하는 것은 0 초과로 하는 것
		for (int j = i; j >0 ; j--) {
			cout << j << ' ';
		}
		cout << endl;
	}
}