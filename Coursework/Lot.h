#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Define.h"
#include "User.h"
using namespace std;


/* простое объявление чтобы не вставлять сюда еще больше кода посредством include */
namespace LotsFile {
	vector<ROM> GetV_ROM();
	vector<RAM> GetV_RAM();
	vector<Keyboard> GetV_Keyboard();
	vector<GPU> GetV_GPU();
	vector<CPU> GetV_CPU();
}



class LotID {
public:
	LotID() { num++; count++; number = num; }

	const int getNewID();
private:
	static int num, count, number;
};


class Lot {
public:
	void setName(string name);
	void setQuantity(int quantity);
	void setPrice(double price);
	void setCategory(string category);
	void setManufacturer(string manufacturer);
	
	// void setID(int id);
	/* я знаю что это неправильно, но friend сказал нет */


	int getID();
	string getCategory();
	string getName();
	string getManufacturer();
	int getQuantity();
	double getPrice();

	//Lot GetExemplar();
	double GetDiscountPrice(User user);
	virtual void ToConsole(User user);

private:
	friend vector<ROM> LotsFile::GetV_ROM();
	friend vector<RAM> LotsFile::GetV_RAM();
	friend vector<Keyboard> LotsFile::GetV_Keyboard();
	friend vector<GPU> LotsFile::GetV_GPU();
	friend vector<CPU> LotsFile::GetV_CPU();

	void setID(int id);
	LotID Id;
protected:
	string category;
	string name;
	string manufacturer;
	int id = Id.getNewID();
	int quantity = 0;
	double price = 0;
};