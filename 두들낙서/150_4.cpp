# include <iostream>
using namespace std;

/*정수형 이차원 배열을 입력받아 그 배열의 각 행의 요소의 합을 출력하는 프로그램*/

int main() {
	int line, row, arr[10][10];
	cin >> line >> row;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < row; j++) {
			cin >> arr[i][j]; 
		}
	}

	for (int i = 0; i < line; i++) {
		int sum = 0;
		for (int j = 0; j < row; j++) {
			sum += arr[i][j];
		}
		cout << sum << endl;
	}

}