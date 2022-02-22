#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

class Vehicle {
public:
	virtual void printVehicle() = 0;
};

class TwoWheeler :public Vehicle {
public:
	void printVehicle() {
		cout << "two wheeler" << endl;
	}
};

class ThreeWheeler :public Vehicle {
public:
	void printVehicle() {
		cout << "three wheeler" << endl;
	}
};

class FourWheeler :public Vehicle {
public:
	void printVehicle() {
		cout << "four wheeler" << endl;
	}
};

class Client {
private:
	Vehicle* pVehicle;
public:
	Client(int type) {
		if (type == 1)
			pVehicle = new TwoWheeler();
		else if (type == 2)
			pVehicle = new FourWheeler();
		else if (type == 3)
			pVehicle = new ThreeWheeler();
		else
			pVehicle = NULL;

	}
	~Client() {
		if (pVehicle) {
			delete[] pVehicle;
			pVehicle = NULL;
		}
	}
	Vehicle* getVehicle() {
		return pVehicle;
	}

};

int main() {
	Client* pClient = new Client(3);
	Vehicle* pVehicle = pClient->getVehicle();
	pVehicle->printVehicle();
	return 0;
}