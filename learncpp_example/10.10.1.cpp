# include <iostream>
#include <stdio.h>
using namespace std;

/*포인터의 사이즈에 관하여*/

int main() {
	int array[5]{ 9,7,5,3,1 };
	cout << sizeof(array) << endl;
	int* ptr = array; //&array아님
	cout << sizeof(ptr) << endl; //포인터도  int 한칸짜리의 공간을 차지하고 있음
}