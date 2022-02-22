#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;


class Person {
private:
	string m_name;
	shared_ptr<Person> m_partner; // initially created empty
public:
	Person(const string& name) : m_name(name)
	{
		cout << m_name << " created\n";
	}
	~Person()
	{
		cout << m_name << " destroyed\n";
	}
	friend bool partnerUp(shared_ptr<Person>& p1,shared_ptr<Person>& p2) {
		if (!p1 || !p2)
			return false;
		p1->m_partner = p2;
		p2->m_partner = p1;
		cout << p1->m_name << " is now partnered with " << p2 -> m_name << "\n";
		return true;
	}
};
int main() {
	shared_ptr<Person> lucy(new Person("Lucy"));
	shared_ptr<Person> ricky(new Person("Ricky"));
	// Make "Lucy" point to "Ricky" and vice-versa
	cout << "ref count [lucy]: " << lucy.use_count() << "ref count [ricky]: " << ricky.use_count() << endl;
	partnerUp(lucy, ricky);
	cout << "ref count [lucy]: " << lucy.use_count() << "ref count [ricky]: " << ricky.use_count() << endl;
	//destructor 출력 X. lucy, ricky는 사라졌지만 lucy와 ricky가 만들었던 person 객체 안에서 
	//내부적으로 서로를 가리켜서 ref count가 0이 되지 않는다.

	return 0;
}