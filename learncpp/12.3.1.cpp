# include <iostream>
#include <stdio.h>
using namespace std;

class DateClass {
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(int month, int day, int year) {
		m_month = month;
		m_day = day;
		m_year = year;
	}

	void print() {
		cout << m_year << "/" << m_month << '/' << m_day;
	}
};

int main() {
	DateClass day1;
	day1.setDate(1, 2, 3);
	day1.print();
	
}