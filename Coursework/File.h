#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Assortment.h"
#include "Define.h"
#include "Lot.h"
#include "User.h"
using namespace std;


namespace LotsFile {
	vector<string>CategoryList();

	vector<ROM> GetV_ROM();
	vector<RAM> GetV_RAM();
	vector<Keyboard> GetV_Keyboard();
	vector<GPU> GetV_GPU();
	vector<CPU> GetV_CPU();
}


namespace UsersFile {
	bool CheckPassword(string name, string password);
	User GetUser(string name);
}