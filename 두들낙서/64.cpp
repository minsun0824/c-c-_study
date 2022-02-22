#include <iostream>
using namespace std;

class Animal {
private:
	int food;
	int weight;

public:
	void set_animal(int food, int weight) {
		this->food = food;
		this->weight = weight;
	}

	void increase_food(int eat) {
		food += eat;
		weight += eat / 3;
	}

	void view_stat() {
		cout << "this animal food: " << food << endl;
		cout << "this animal weight: " << weight << endl;
	}

};

int main() {
	Animal mouse;
	mouse.set_animal(100, 100);
	mouse.increase_food(50);
	mouse.view_stat();
}