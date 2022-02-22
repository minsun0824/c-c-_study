#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> m;
	m.insert(pair<string, int>("Bob", 20));
	m.insert(pair<string, int>("Alice", 22));
	m.insert(pair<string, int>("Carol", 21));
	cout << m["Bob"] << endl;
	for (pair<string, int> p : m)
		cout << p.first << ": " << p.second << endl;
	for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
		cout << it->first << ": " << it->second << endl;
}