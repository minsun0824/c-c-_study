# include <iostream>
using namespace std;

int main() {
	int n;
	cout << "input number: ";
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < 2*i ; j++) {
			cout << j << ' ';
		}
		cout << endl;
	}
}