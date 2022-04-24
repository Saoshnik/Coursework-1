#pragma once
#include <iostream>
#include <vector>
#include "Lot.h"
#include "Define.h"

using namespace std;


class ROM : public Lot {
public:
	/*ROM(string category, string name, string manufacturer, int quantity, int price, string memory_size);
	ROM() {};*/
	
	void ToConsole(User user) override;

	string getMemorySize();
	void setMemorySize(string memory_size);
private:
	friend vector<ROM> LotsFile::GetV_ROM();

	ROM GetExemplar();
	string memory_size;
};

/* ROM ::ROM(string category = "", string name = "", string manufacturer = "", int quantity = 0, int price = 0, string memory_size = "") {
	LotID id;
	this->id = id.getNewID();
	
	this->category = category;
	this->name = name;
	this->manufacturer = manufacturer;
	this->quantity = quantity;
	this->price = price;
	this->memory_size = memory_size;
} */



class RAM : public Lot {
public:
	/*RAM(string category, string name, string manufacturer, int quantity, int price, string memory_size);
	RAM() {};*/
	
	void ToConsole(User user) override;

	string getMemorySize();
	void setMemorySize(string memory_size);
private:
	RAM GetExemplar();
	string memory_size;
};

/* RAM::RAM(string category = "", string name = "", string manufacturer = "", int quantity = 0, int price = 0, string memory_size = "") {
	LotID id;
	this->id = id.getNewID();
	
	this->name = name;
	this->manufacturer = manufacturer;
	this->quantity = quantity;
	this->price = price;
	this->memory_size = memory_size;
} */


class Keyboard : public Lot {
public:
	/*Keyboard(string category, string name, string manufacturer, int quantity, int price, string type);
	Keyboard() {};*/

	void ToConsole(User user) override;

	string getType();
	void setType(string type);
private:
	Keyboard GetExemplar();
	string type;
};

/* Keyboard::Keyboard(string category = "", string name = "", string manufacturer = "", int quantity = 0, int price = 0, string type = "") {
	LotID id;
	this->id = id.getNewID();
	
	this->name = name;
	this->manufacturer = manufacturer;
	this->quantity = quantity;
	this->price = price;
	this->type = type;
} */



class CPU : public Lot {
public:
	/*CPU(string category, string name, string manufacturer, int quantity, int price, double GHz);
	CPU() {};*/

	void ToConsole(User user) override;

	double getGHz();
	void setGHz(double GHz);
private:
	CPU GetExemplar();
	double GHz = 0;
};

/* CPU::CPU(string category = "", string name = "", string manufacturer = "", int quantity = 0, int price = 0, double GHz = 0) {
	LotID id;
	this->id = id.getNewID();
	
	this->name = name;
	this->manufacturer = manufacturer;
	this->quantity = quantity;
	this->price = price;
	this->GHz;
} */


class GPU : public Lot {
public:
	/*GPU(string category, string name, string manufacturer, int quantity, int price, double GHz);
	GPU() {};*/
	
	void ToConsole(User user) override;

	double getGHz();
	void setGHz(double GHz);
private:
	GPU GetExemplar();
	double GHz = 0;
};

/* GPU::GPU(string category = "", string name = "", string manufacturer = "", int quantity = 0, int price = 0, double GHz = 0) {
	LotID id;
	this->id = id.getNewID();
	
	this->name = name;
	this->manufacturer = manufacturer;
	this->quantity = quantity;
	this->price = price;
	this->GHz = GHz;
} */