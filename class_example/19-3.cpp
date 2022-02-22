#include <iostream>
#include <vector>
using namespace std;

class Beverage {
protected:
	string description = "Unknown Beverage";
public:
	virtual string getDescription() = 0;
	virtual double cost() = 0;
};
class Espresso : public Beverage {
private:
public:
	Espresso() { description = "Espresso"; }
	string getDescription() { return this->description; }
	double cost() { return 1.99; }
};
class HouseBlend : public Beverage {
private:
public:
	HouseBlend() { description = "House Blend Coffee"; }
	string getDescription() { return this->description; }
	double cost() { return 0.89; }
};
class Decorator : public Beverage {
protected:
	//The beverage that each decorator will be wrapping
	Beverage* beverage;
};
class Mocha : public Decorator {
public:
	Mocha(Beverage* t_beverage) { this->beverage = t_beverage; }
	string getDescription() {
		return this->beverage->getDescription() + ", Mocha";
	}
	double cost() { return beverage->cost() + 0.20; }
};
class Whip : public Decorator {
public:
	Whip(Beverage* t_beverage) { this->beverage = t_beverage; }
	string getDescription() {
		return this->beverage->getDescription() + ", Whip";
	}
	double cost() { return beverage->cost() + 0.45; }
};


int main() {
	Beverage* beverage1;
	beverage1 = new Espresso(); //1.99
	beverage1 = new Mocha(beverage1); //0.20
	beverage1 = new Mocha(beverage1); //0.20
	cout << "Total cost: " << beverage1->cost() << endl;
	cout << beverage1-> getDescription() << endl;
	Beverage* beverage2;
	beverage2 = new HouseBlend(); //0.89
	beverage2 = new Mocha(beverage2); //0.20
	beverage2 = new Whip(beverage2); //0.45
	cout << "Total cost: " << beverage2->cost() << endl;
	cout << beverage2-> getDescription() << endl;
	delete beverage1;
	delete beverage2;
	return 0;
}