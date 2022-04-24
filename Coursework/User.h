#pragma once
#include <iostream>
#include "Define.h"
#include <vector>
#include <string>
using namespace std;



class User {
public:
	// User();
	void ReduceBalance(double &price);

	const int& getID();
	string getName();
	string getAdress();
	double getSpent();
	double getBalance();
	void setName(string name);
	void setAdress(string adress);
	void setSpent(double spent);
	void setBalance(double balance);


private:
	
	/* ������ ����� ������� � ���� ������� ��������, ����� �������� �� �������������� ����� ��� ���� ��������� ������, ��������� ��� */

	int id;
	string name;
	string adress;
	double spent = 0;
	double balance = 0;
};

//User::User() {
//	UserID id;
//	this->id = id.getnum();
//}