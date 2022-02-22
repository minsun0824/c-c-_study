#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

class Person {
private:
	string m_name;
	weak_ptr<Person> m_partner; // 서로를 가르키는 pointer를 weak ptr로 한다.
public:
	Person(const std::string& name) : m_name(name)
	{
		cout << m_name << " created\n";
	}
	~Person()
	{
		cout << m_name << " destroyed\n";
	}
	friend bool partnerUp(shared_ptr<Person>& p1,
		shared_ptr<Person>& p2) {
		if (!p1 || !p2)
			return false;
		p1->m_partner = p2;
		p2->m_partner = p1;
		cout << p1->m_name << " is now partnered with " << p2 -> m_name << "\n";
		return true;
	}
	const shared_ptr<Person> getPartner() const
	{
		return m_partner.lock();
	}
	const string& getName() const { return m_name; }
};

int main() {
	shared_ptr<Person> lucy(new Person("Lucy"));
	shared_ptr<Person> ricky(new Person("Ricky"));
	cout << "ref count [lucy]: " << lucy.use_count() << "ref count [ricky]: " << ricky.use_count() << endl;
	// Make "Lucy" point to "Ricky" and vice-versa
	partnerUp(lucy, ricky);
	cout << "ref count [lucy]: " << lucy.use_count() << "ref count [ricky]: " << ricky.use_count() << endl;

	shared_ptr<Person> partner = ricky->getPartner();
	cout << ricky->getName() << "'s partner is: "
		<< partner->getName() << endl;
	return 0;
}