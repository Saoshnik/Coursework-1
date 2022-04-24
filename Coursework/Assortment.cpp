#include "Assortment.h"


string ROM::getMemorySize() {
	return memory_size;
}
void ROM::setMemorySize(string memory_size) {
	this->memory_size = memory_size;
}
ROM ROM::GetExemplar() {
	ROM exemplar;
	exemplar.setCategory(this->category);
	exemplar.setMemorySize(this->memory_size);
	exemplar.setManufacturer(this->manufacturer);
	exemplar.setName(this->name);
	exemplar.setPrice(this->price);
	exemplar.setQuantity(this->quantity);

	return exemplar;
}

void ROM::ToConsole(User user) {
	// Lot ex = ex.GetExemplar();
	/* base.ToConsole() */
	cout << "id [" << getID() << "]  ";
	Lot ex;
	ex.setCategory(this->category);
	ex.setManufacturer(this->manufacturer);
	ex.setName(this->name);
	ex.setPrice(this->price);
	ex.setQuantity(this->quantity);

	ex.ToConsole(user);
	cout << "Memory_size " << this->memory_size << '\n';
}



string RAM::getMemorySize() {
	return memory_size;
}
void RAM::setMemorySize(string memory_size) {
	this->memory_size = memory_size;
}
RAM RAM::GetExemplar() {
	RAM exemplar;
	exemplar.setCategory(this->category);
	exemplar.setMemorySize(this->memory_size);
	exemplar.setManufacturer(this->manufacturer);
	exemplar.setName(this->name);
	exemplar.setPrice(this->price);
	exemplar.setQuantity(this->quantity);

	return exemplar;
}

void RAM::ToConsole(User user) {
	// Lot ex = ex.GetExemplar();
	/* base.ToConsole() */
	cout << "id [" << getID() << "]  ";
	Lot ex;
	ex.setCategory(this->category);
	ex.setManufacturer(this->manufacturer);
	ex.setName(this->name);
	ex.setPrice(this->price);
	ex.setQuantity(this->quantity);

	ex.ToConsole(user);
	cout << "Memory_size " << this->memory_size << '\n';
}



string Keyboard::getType() {
	return type;
}
void Keyboard::setType(string type) {
	this->type = type;
}
Keyboard Keyboard::GetExemplar() {
	Keyboard exemplar;
	exemplar.setCategory(this->category);
	exemplar.setType(this->type);
	exemplar.setManufacturer(this->manufacturer);
	exemplar.setName(this->name);
	exemplar.setPrice(this->price);
	exemplar.setQuantity(this->quantity);

	return exemplar;
}

void Keyboard::ToConsole(User user) {
	// Lot ex = ex.GetExemplar();
	/* base.ToConsole() */
	cout << "id [" << getID() << "]  ";
	Lot ex;
	ex.setCategory(this->category);
	ex.setManufacturer(this->manufacturer);
	ex.setName(this->name);
	ex.setPrice(this->price);
	ex.setQuantity(this->quantity);
	
	ex.ToConsole(user);
	cout << "Type " << this->type << '\n';
}



double CPU::getGHz() {
	return GHz;
}
void CPU::setGHz(double GHz) {
	this->GHz = GHz;
}
CPU CPU::GetExemplar() {
	CPU exemplar;
	exemplar.setCategory(this->category);
	exemplar.setGHz(this->GHz);
	exemplar.setManufacturer(this->manufacturer);
	exemplar.setName(this->name);
	exemplar.setPrice(this->price);
	exemplar.setQuantity(this->quantity);

	return exemplar;
}

void CPU::ToConsole(User user) {
	// Lot ex = ex.GetExemplar();
	/* base.ToConsole() */
	cout << "id [" << getID() << "]  ";
	Lot ex;
	ex.setCategory(this->category);
	ex.setManufacturer(this->manufacturer);
	ex.setName(this->name);
	ex.setPrice(this->price);
	ex.setQuantity(this->quantity);

	ex.ToConsole(user);
	cout << "GHz " << this->GHz << '\n';
}



double GPU::getGHz() {
	return GHz;
}
void GPU::setGHz(double GHz) {
	this->GHz = GHz;
}
GPU GPU::GetExemplar() {
	GPU exemplar;
	exemplar.setCategory(this->category);
	exemplar.setGHz(this->GHz);
	exemplar.setManufacturer(this->manufacturer);
	exemplar.setName(this->name);
	exemplar.setPrice(this->price);
	exemplar.setQuantity(this->quantity);

	return exemplar;
}

void GPU::ToConsole(User user) {
	// Lot ex = ex.GetExemplar();
	/* base.ToConsole() */
	cout << "id [" << getID() << "]  ";
	Lot ex;
	ex.setCategory(this->category);
	ex.setManufacturer(this->manufacturer);
	ex.setName(this->name);
	ex.setPrice(this->price);
	ex.setQuantity(this->quantity);

	ex.ToConsole(user);
	cout << "GHz " << this->GHz << '\n';
}