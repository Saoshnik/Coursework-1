#include "Lot.h"

const int LotID::getNewID() {
	return number;
}
/* синтаксис static, обязательно в cpp */
int LotID::num = 0;
int LotID::count = 0;
int LotID::number = 0;



void Lot::setName(string name) {
	this->name = name;
}
void Lot::setQuantity(int quantity) {
	this->quantity = quantity;
}
void Lot::setPrice(double price) {
	this->price = price;
}
void Lot::setCategory(string category) {
	this->category = category;
}
void Lot::setManufacturer(string manufacturer) {
	this->manufacturer = manufacturer;
}
void Lot::setID(int id) {
	this->id = id;
}

int Lot::getID() {
	return id;
}
string Lot::getName() {
	return name;
}
string Lot::getManufacturer() {
	return manufacturer;
}
string Lot::getCategory() {
	return category;
}
int Lot::getQuantity() {
	return quantity;
}
double Lot::getPrice() {
	return price;
}

double Lot::GetDiscountPrice(User user) {
	if (user.getSpent() < 300)
		return price;
	if (user.getSpent() < 1000)
		return 0.9 * price;

	return 0.8 * price;
}
//Lot Lot::GetExemplar() {
//	Lot exemplar;
//	exemplar.setCategory(this->category);
//	exemplar.setManufacturer(this->manufacturer);
//	exemplar.setName(this->name);
//	exemplar.setPrice(this->price);
//	exemplar.setQuantity(this->quantity);
//
//	return exemplar;
//}

void Lot::ToConsole(User user) {
	cout << getName() << "\nСкидочная цена " << GetDiscountPrice(user)
		<< "\nЦена без учета скидки " << getPrice() << "\nКол на складе " << getQuantity() << '\n';
}