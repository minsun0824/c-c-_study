# include <iostream>
using namespace std;

string order(int menu) {
	if (menu == 1) {
		return "sold out";
	}
	else {
		return "successfully ordered";
	}
}

int main() {
	int iMenu = 1;
	cout << "1.coffee\n2.juice\n3. quit\n";
	do {
		cout << "select menu?: ";
		cin >> iMenu;
		cout << order(iMenu) << endl;
	} while (iMenu != 3);
	return 0;
}