# include <iostream>
using namespace std;

/*100개 이하의 정수를 입력받아 첫 줄에는 짝수번째 숫자 출력, 다음줄에는 홀수번째 숫자 출력*/

int main() {
	int count, input;
	cout << "count number input: ";
	cin >> count;
	int arr[100];
	for (int i = 0; i < count; i++) {
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < count; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	for (int i = 0; i < count; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
}