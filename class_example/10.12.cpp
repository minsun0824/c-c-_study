#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;



void mySort(int arr[], int n)
{
	
}
void printArray(int arr[], int size)
{
	//Implement this
}

int main() {
	int arr[] = { 3, 1, 2, 5, 6, 7,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	mySort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}