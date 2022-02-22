#include <iostream>
using namespace std;

/*foward declaration
*/
class Lecture;
class Teacher;
class Student;


class Lecture {
private:
	int* m_pId;
	string m_name;
	Student* s_group; //A list of students
	Teacher* m_pTeacher;
public:
	Lecture();
	Lecture(int, string);
	Lecture(int, string, Teacher*);
	string GetName(); //lecture name
	string GetTeacherName();
	void SetID(int id);
};

Lecture::Lecture() {
	m_pId = new int(0);
	m_name = "Alice";
}
Lecture::Lecture(int id, string name) {
	m_pId = new int(id);
	m_name = name;
}
Lecture::Lecture(int id, string name, Teacher* p_teacher) {
	m_pId = new int(id);
	m_name = name;
	this->m_pTeacher = p_teacher; // 이미 생성된 teacher 객체의 주소를 받아와서 p_teacher라는 포인터에 넣겠다.
}
string Lecture::GetName() {
	return m_name;
}
void Lecture::SetID(int id) {
	*(this->m_pId) = id;
}
string Lecture::GetTeacherName() {
	return m_pTeacher->GetName();
}


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


Student::Student() {
	m_pid = new int(0);
	m_name = "minsun";
}

Student::Student(int id, string name) {
	m_pid = new int(id);
	m_name = name;
}

string Student::GetName() {
	return m_name;
}

void Student::SetID(int id) {
	*(this->m_pid) = id;
}

class Teacher {
private:
	int* m_pId;
	string m_name;
	Lecture* m_lecture;
public:
	Teacher();
	Teacher(int, string);
	string GetName();
	void SetID(int id);
};

Teacher::Teacher() {
	m_pId = new int(0);
	m_name = "Alice";
}
Teacher::Teacher(int id, string name) {
	m_pId = new int(id);
	m_name = name;
}
string Teacher::GetName() {
	return m_name;
}
void Teacher::SetID(int id) {
	*(this->m_pId) = id;
}


int main() {
	Student s1(201911999, "Alice");
	Teacher t1(111111111, "Tom");
	Lecture l1(222222222, "OOP");
	Lecture l2(33333, "oop2",&t1); //tom teaches l2.t1의 주소로 받아야 한다, teacher를 생성할 때 포인터로 받았기 때문
	
	cout << s1.GetName() << endl;
	cout << t1.GetName() << endl;
	cout << l1.GetName() << endl;

	cout << l2.GetName() << "\t" << l2.GetTeacherName() << endl;
	return 0;
}