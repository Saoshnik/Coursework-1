#include "User.h"



void User::ReduceBalance(double &price) {
	this->spent += price;
	this->balance -= price;
}
/* set-get */
const int& User::getID() {
	return id;
}
double User::getSpent() {
	return spent;
}
double User::getBalance() {
	return balance;
}
string User::getName() {
	return name;
}
string User::getAdress() {
	return adress;
}
void User::setName(string name) {
	this->name = name;
}
void User::setAdress(string adress) {
	this->adress = adress;
}
void User::setSpent(double spent) {
	this->spent = spent;
}
void User::setBalance(double balance) {
	this->balance = balance;
}