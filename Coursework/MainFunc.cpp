#include "MainFunc.h"



void MainFunc::ShowCategories(vector<string> list) {
    for (int i = 0; i < list.size(); ++i)
        cout << i + 1 << ". " << list[i] << '\n';
}

vector<Lot*> MainFunc::Unite(vector<ROM>& v_rom, vector<RAM>& v_ram, vector<Keyboard>& v_key, vector<CPU>& v_cpu, vector<GPU>& v_gpu) {
    vector<Lot*> lots;

    for (auto& value : v_rom) lots.push_back(&value);
    for (auto& value : v_ram) lots.push_back(&value);
    for (auto& value : v_key) lots.push_back(&value);
    for (int i = 0; i < v_cpu.size(); ++i) lots.push_back(&v_cpu[i]);
    for (int i = 0; i < v_gpu.size(); ++i) lots.push_back(&v_gpu[i]);

    return lots;
}