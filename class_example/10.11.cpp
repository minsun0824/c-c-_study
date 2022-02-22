#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	char name[] = "mshappy";
	cout << name[0] << endl;
	cout << name << endl;
	cout << sizeof(name) << endl;  //얘는 5임
}