# include <iostream>
using namespace std;

int parity(int n) {
	if (n %2== 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	cout<<parity(101);
}