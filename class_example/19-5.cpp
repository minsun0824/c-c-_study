#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Product {
public:
	vector<string> parts;
	void ListParts()const {
		for_each(parts.begin(), parts.end(), [](string p) {cout
			<< "Part " + p << ", "; });
		cout << endl;
	}
};

class Builder {
public:
	virtual ~Builder() {}
	virtual void setBasement() const = 0;
	virtual void setStructure() const = 0;
	virtual void setRoof() const = 0;
	virtual void setInterior() const = 0;
	virtual void setExterior() const = 0;
};


//The Concrete Builder classes
class IglooBuilder : public Builder {
private:
	Product* product;
public:
	IglooBuilder() { this->Reset(); }
	~IglooBuilder() { delete product; }
	void Reset() {
		this->product = new Product();
	}
	// All production steps work with the same product instance.
	void setBasement()const override {
		this->product->parts.push_back("Igloo Basement");
	}
	void setStructure()const override {
		this->product->parts.push_back("Igloo Structure");
	}
	void setRoof()const override {
		this->product->parts.push_back("Igloo Roof");
	}
	void setInterior() const override {
		this->product->parts.push_back("Igloo Interior");
	}
	void setExterior() const override {
		this->product->parts.push_back("Igloo exterior");
	}
	Product* GetProduct() {
		Product* result = this->product;
		this->Reset();
		return result;
	}
};

class APTBuilder : public Builder {
private:
	Product* product;
public:
	APTBuilder() { this->Reset(); }
	~APTBuilder() { delete product; }
	void Reset() {
		this->product = new Product();
	}
	void setBasement()const override {
		this->product->parts.push_back("APT Basement");
	}
	void setStructure()const override {
		this->product->parts.push_back("APT Structure");
	}
	void setRoof()const override {
		this->product->parts.push_back("APT Roof");
	}
	void setInterior() const override {
		this->product->parts.push_back("APT Interior");
	}
	void setExterior() const override {
		this->product->parts.push_back("APT exterior");
	}
	Product* GetProduct() {
		Product* result = this->product;
		this->Reset();
		return result;
	}
};

class Director {
private:
	Builder* builder;
public:
	void set_builder(Builder* builder) {
		this->builder = builder;
	}
	void IglooHouse() {
		this->builder->setBasement();
		this->builder->setStructure();
		this->builder->setRoof();
		this->builder->setInterior(); //Interior first
		this->builder->setExterior(); //Exterior later
	}
	void APTHouse() {
		this->builder->setBasement();
		this->builder->setStructure();
		this->builder->setRoof();
		this->builder->setExterior(); //Exterior first
		this->builder->setInterior(); //Interior later
	}
};

int main() {
	Director* director = new Director();

	IglooBuilder* ibuilder = new IglooBuilder();
	director->set_builder(ibuilder);
	cout << "building an igloo" << endl;
	director->IglooHouse();

	Product* p = ibuilder->GetProduct();
	p->ListParts();
	delete p;
	delete ibuilder;

	APTBuilder* abuilder = new APTBuilder();
	director-> set_builder(abuilder);
	cout << "Building an Apartment:\n";
	director-> APTHouse();
	p = abuilder-> GetProduct();
	p-> ListParts();
	delete p;
	delete abuilder;
	delete director;
	return 0;

}