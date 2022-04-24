#pragma once
#include <iostream>
#include <vector>
#include "Define.h"
#include "File.h"
using namespace std;



namespace MainFunc {
    void ShowCategories(vector<string> list);
    vector<Lot*> Unite(vector<ROM>& v_rom, vector<RAM>& v_ram, vector<Keyboard>& v_key, vector<CPU>& v_cpu, vector<GPU>& v_gpu);
}