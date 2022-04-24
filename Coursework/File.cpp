#include "File.h"

#define v_rom vector<ROM>
#define v_ram vector<RAM>
#define v_key vector<Keyboard>
#define v_cpu vector<CPU>
#define v_gpu vector<GPU>

class ROM;
class RAM;
class Keyboard;
class CPU;
class GPU;




/* ((общий метод) если создать) метод возвращающий количество (товарных) полей, можно использовать чтобы категории товаров определ€лись автоматически */

vector<string> LotsFile::CategoryList() {
	vector<string> list;
	list.push_back("ROM");
	list.push_back("RAM");
	list.push_back("Keyboard");
	list.push_back("CPU");
	list.push_back("GPU");

	return list;
}





/* (можно попробовать создать (возможно класс)) функци€ передающа€ поочереди все пол€ класса */

vector<ROM> LotsFile::GetV_ROM() {
	setlocale(LC_ALL, "english");
	v_rom ROMs;


	string file = "ROM.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {

		ROM Some;
		string str;
		bool skip_element = false, second_Some = false,
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, MemorySize = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if (!Category) {
				Some.setCategory(str);

				Category = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Name) {
				Some.setName(str);

				Name = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Manufacturer) {
				Some.setManufacturer(str);

				Manufacturer = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Quantity) {
				Some.setQuantity(stoi(str));

				Quantity = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Price) {
				Some.setPrice(stoi(str));

				Price = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!MemorySize) {
				Some.setMemorySize(str);

				MemorySize = true;
				skip_element = true;
				str = "";

				/* создаем доп экземпл€р и дл€ генерации id и переприсвоени€ Some.id,
				так как id до переприсвоени€ принадлежит Roms[i - 1] (типа того) */
				if (second_Some == true) {
					ROM extra;
					Some.setID(extra.getID());
				}
			}


			ROMs.push_back(Some);
			second_Some = true;
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, MemorySize = false;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return ROMs;
}


vector<RAM> LotsFile::GetV_RAM() {
	setlocale(LC_ALL, "english");
	v_ram RAMs;


	string file = "RAM.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {

		RAM Some;
		string str;
		bool skip_element = false, second_Some = false,
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, MemorySize = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}
		

			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}
			
			else if (!Category) {
				Some.setCategory(str);

				Category = true;
				skip_element = true;
				str = "";
				continue;
			}
			
			else if (!Name) {
				Some.setName(str);

				Name = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Manufacturer) {
				Some.setManufacturer(str);

				Manufacturer = true;
				skip_element = true;
				str = "";
				continue;
			}
			
			else if (!Quantity) {
				Some.setQuantity(stoi(str));

				Quantity = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Price) {
				Some.setPrice(stoi(str));

				Price = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!MemorySize) {
				Some.setMemorySize(str);

				MemorySize = true;
				skip_element = true;
				str = "";
				
				/* создаем доп экземпл€р и дл€ генерации id и переприсвоени€ Some.id,
				так как id до переприсвоени€ принадлежит Roms[i - 1] (типа того) */
				if (second_Some == true) {
					ROM extra;
					Some.setID(extra.getID());
				}
			}


			RAMs.push_back(Some);
			second_Some = true;
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, MemorySize = false;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return RAMs;
}


vector<Keyboard> LotsFile::GetV_Keyboard() {
	setlocale(LC_ALL, "english");
	v_key Keys;


	string file = "Keyboard.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {

		Keyboard Some;
		string str;
		bool skip_element = false, second_Some = false,
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, Type = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if (!Category) {
				Some.setCategory(str);

				Category = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Name) {
				Some.setName(str);

				Name = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Manufacturer) {
				Some.setManufacturer(str);

				Manufacturer = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Quantity) {
				Some.setQuantity(stoi(str));

				Quantity = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Price) {
				Some.setPrice(stoi(str));

				Price = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Type) {
				Some.setType(str);

				Type = true;
				skip_element = true;
				str = "";
				
				/* создаем доп экземпл€р и дл€ генерации id и переприсвоени€ Some.id,
				так как id до переприсвоени€ принадлежит Roms[i - 1] (типа того) */
				if (second_Some == true) {
					ROM extra;
					Some.setID(extra.getID());
				}
			}


			Keys.push_back(Some);
			second_Some = true;
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, Type = false;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return Keys;
}


vector<CPU> LotsFile::GetV_CPU() {
	setlocale(LC_ALL, "english");
	v_cpu CPUs;


	string file = "CPU.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {

		CPU Some;
		string str;
		bool skip_element = false, second_Some = false,
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, GHz = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if (!Category) {
				Some.setCategory(str);

				Category = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Name) {
				Some.setName(str);

				Name = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Manufacturer) {
				Some.setManufacturer(str);

				Manufacturer = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Quantity) {
				Some.setQuantity(stoi(str));

				Quantity = true;
				skip_element = true;
				str = "";
				continue;
			}
			
			else if (!Price) {
				Some.setPrice(stoi(str));

				Price = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!GHz) {
				Some.setGHz(stod(str));

				GHz = true;
				skip_element = true;
				str = "";
				
				/* создаем доп экземпл€р и дл€ генерации id и переприсвоени€ Some.id,
				так как id до переприсвоени€ принадлежит Roms[i - 1] (типа того) */
				if (second_Some == true) {
					ROM extra;
					Some.setID(extra.getID());
				}
			}


			CPUs.push_back(Some);
			second_Some = true;
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, GHz = false;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return CPUs;
}


vector<GPU> LotsFile::GetV_GPU() {
	setlocale(LC_ALL, "english");
	v_gpu GPUs;


	string file = "GPU.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {

		GPU Some;
		string str = "";
		bool skip_element = false, second_Some = false,
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, GHz = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if (!Category) {
				Some.setCategory(str);

				Category = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Name) {
				Some.setName(str);

				Name = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Manufacturer) {
				Some.setManufacturer(str);

				Manufacturer = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Quantity) {
				Some.setQuantity(stoi(str));

				Quantity = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!Price) {
				Some.setPrice(stoi(str));

				Price = true;
				skip_element = true;
				str = "";
				continue;
			}

			else if (!GHz) {
				Some.setGHz(stod(str));

				GHz = true;
				skip_element = true;
				str = "";
				
				/* создаем доп экземпл€р и дл€ генерации id и переприсвоени€ Some.id,
				так как id до переприсвоени€ принадлежит Roms[i - 1] (типа того) */
				if (second_Some == true) {
					ROM extra;
					Some.setID(extra.getID());
				}
			}


			GPUs.push_back(Some);
			second_Some = true;
			Category = false, Name = false, Manufacturer = false, Quantity = false, Price = false, GHz = false;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return GPUs;
}









bool UsersFile::CheckPassword(string name, string password) {
	string file = "UsersPassword.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {
		
		string str;
		bool b_name = false, skip_element = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if(!b_name) {
				if (str == name) b_name = true;
				
				skip_element = true;
				str = "";

				continue;
			}

			else {
				if (str == password) return true;
				else return false;
			}
		}

		return false;
	}

	cout << "ќшибка открыти€ файла " << file << '\n';
	return false;
}

User UsersFile::GetUser(string name) {
	User user;

	string file = "Users.txt";

	ifstream fin;
	fin.open(file);

	if (fin.is_open()) {
		string str;

		bool b_name = false, adress = false, spent = false, balance = false,
			skip_element = false;

		while (!fin.eof()) {
			if (skip_element) {
				skip_element = false;
				continue;
			}


			char ch;
			fin.get(ch);


			if (ch != '\n' && !fin.eof()) {
				str += ch;
				continue;
			}

			else if (!b_name) {
				if (str == name) {
					b_name = true;
					user.setName(str);
				}

				str = "";
				skip_element = true;
				continue;
			}

			else if (!adress) {
				user.setAdress(str);

				str = "";
				skip_element = true;
				adress = true;
				continue;
			}

			else if (!spent) {
				user.setSpent(stod(str));

				str = "";
				skip_element = true;
				spent = true;
				continue;
			}

			else if (!balance) {
				user.setBalance(stod(str));

				str = "";
				skip_element = true;
				balance = true;
				
				/* it's last */
			}

			break;
		}
	}

	else cout << "ќшибка открыти€ файла " << file << '\n';

	return user;
}