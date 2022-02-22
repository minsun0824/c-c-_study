#include <iostream>
#include <string>
#include <exception>
using namespace std;

class WithdrawlCheck {
	int Balanece;
	int amount;
	string s;
public:
	void CheckBalance() {
		cout << "잔액이 부족합니다." << endl;
	}
	void WithdrawlCash(int Balance) {
		if (Balance < 500) {
			CheckBalance();
		}
		else {
			cout << "얼마를 출금하실지 적으시오" << endl;
			try { cin >> amount; }
			catch (exception c) {
				cout << "제대로 된 값을 적으시오" << endl;
				WithdrawlCash(Balance);
			}
			if (Balance > amount) {
				Balance -= amount;
				cout << "잔액 " << Balance << endl;
			}
			else {
				cout << "충분하지 않은 잔액" << endl;
			}
		}
		cout << "더 거래를 하시겠습니까" << endl;
		cin >> s;
		int num = s.compare("exit");
		int n1 = s.compare("Y");
		int n2 = s.compare("y");
		if (num == 0 || n1 == 0 || n2 == 0) {
			WithdrawlCash(Balance);
		}
		else {
			cout << "Bye" << endl;
			exit(0);
		}
	}
};

int main()
{
	int Bal;
	cout << "**********" << "Welcome User" << "*********" << endl;
	cout << "Enter the Balance" << endl;
	cin >> Bal;
	WithdrawlCheck c;
	c.WithdrawlCash(Bal);
}