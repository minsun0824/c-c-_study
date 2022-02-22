#include <iostream>
#include <vector>
using namespace std;

enum VehicleType {
	VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};
// Library classes
class Vehicle {
public:
	virtual void printVehicle() = 0;
	static Vehicle* Create(VehicleType type);
};
class TwoWheeler : public Vehicle {
public:
	void printVehicle() {
		cout << "I am two wheeler" << endl;
	}
};
class ThreeWheeler : public Vehicle {
public:
	void printVehicle() {
		cout << "I am three wheeler" << endl;
	}
};
class FourWheeler : public Vehicle {
public:
	void printVehicle() {
		cout << "I am four wheeler" << endl;
	}
};
Vehicle* Vehicle::Create(VehicleType type) {
	if (type == VT_TwoWheeler)
		return new TwoWheeler();
	else if (type == VT_ThreeWheeler)
		return new ThreeWheeler();
	else if (type == VT_FourWheeler)
		return new FourWheeler();
	else return NULL;
}

class Client {
private:
	VehicleType type;
	Vehicle* pVehicle;
public:
	Client(VehicleType t) {
		pVehicle = Vehicle::Create(t);
		cout << "Client created" << endl;
	}
	~Client() {
		if (pVehicle) {
			delete pVehicle;
			pVehicle = NULL;
		}
		cout << "Client destroyed" << endl;
	}
	Vehicle* getVehicle() {
		return pVehicle;
	}
};

int main() {
	vector<Vehicle*> v;
	VehicleType type1 = VT_TwoWheeler;
	VehicleType type2 = VT_FourWheeler;
	Client* pClient1 = new Client(type1);
	Client* pClient2 = new Client(type2);

	v.push_back(pClient1->getVehicle());
	v.push_back(pClient2->getVehicle());
	v[1]->printVehicle();


	delete pClient1;
	delete pClient2;
	v.clear();
	return 0;

}