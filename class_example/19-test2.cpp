#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Component {
public:
	virtual ~Component(){}
	virtual string operation() const = 0;
};

class ConcreteComponent : public Component {
public:
	string operation() const override {
		return "ConcreteComponent";
	}
};

class Decorator : public Component {
protected:
	Component* component_;
public:
	Decorator(Component* component): component_(component){}
	string operation() const override {
		return component_->operation();
	}
};

class ConcreteDecoratorA :public Decorator {
public:
	ConcreteDecoratorA(Component* component) :Decorator(component) {}
	string operation()const override {
		return "ConcreteDecoratorA(" + Decorator::operation() + ")";
	}
};

class ConcreteDecoratorB : public Decorator {
public:
	ConcreteDecoratorB(Component* component) : Decorator(component) {
	}

	string operation() const override {
		return "ConcreteDecoratorB(" + Decorator::operation() + ")";
	}
};

void ClientCode(Component* component) {
	cout << "result: " << component->operation() << endl;
}

int main() {
	
	Component* simple = new ConcreteComponent;
	std::cout << "Client: I've got a simple component:\n";
	ClientCode(simple);
	std::cout << "\n\n";
	
	Component* decorator1 = new ConcreteDecoratorA(simple);
	Component* decorator2 = new ConcreteDecoratorB(decorator1);
	std::cout << "Client: Now I've got a decorated component:\n";
	ClientCode(decorator2);
	std::cout << "\n";

	delete simple;
	delete decorator1;
	delete decorator2;

	return 0;
}