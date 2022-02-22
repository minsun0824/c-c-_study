#pragma once
#include<iostream>
#include<string>
#include<string>
#include<Lecture.h>
using namespace std;

class Lecture;

class Student {
private:
	int* m_pid;
	string m_name;
	Lecture* m_IName;

public:
	Student();
	Student(int, string);
	string GetName();
	void SetID(int id);
};