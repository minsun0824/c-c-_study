# include <iostream>
#include <stdio.h>
using namespace std;

class DateClass {
public:
	int m_year;
	int m_month;
	int m_day;

	void print() {
		cout << m_year << "/" << m_month << '/' << m_day;
	}
};

int main() {
	DateClass today{ 2021,10,3 };
	today.m_day = 16;
	today.print();
}