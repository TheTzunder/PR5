#include "barcos.h"
using namespace std;



// constructor

Barcos::Barcos(std::string pName, int pVelocidad, int pNitro, int pDistancia) {

	name = pName;
	velocidad = pVelocidad;
	nitro = pNitro;
	distancia = pDistancia;

}

// gettter

int Barcos::getvelocidad() {
	return velocidad;
}

std::string Barcos::getname() {
	return name;
}

int Barcos::getnitro() {
	return nitro;
}

int Barcos::getdistancia() {
	return distancia;
}

// settets

void Barcos::setVelocidad(int pVelocidad) {
	velocidad = pVelocidad;
}



void Barcos::setNitro(int pNitro) {
	nitro = pNitro;
}

void Barcos::setName(std::string pName) {
	name = pName;

}

void Barcos::setDistancia(int pDistancia){
	distancia = pDistancia;
}

// Methods

void Barcos::useNitro() {
	srand(time(NULL));
	int ram = rand() % 2;
	if (ram==0)
	{
		cout << "psss, el nitro fallo se te a roto un trozo de vela y se te ha reducido a la midad" << endl;
		Barcos::setVelocidad((velocidad / 2));
	}
	else {
		cout << "Rmmmmmm, el nitro funciono vas a toda velocidad" << endl;
		Barcos::setVelocidad((velocidad * 2));
	}
	cout << "Ahora tienes " << velocidad << " de velocidad." << endl;
}

void Barcos::verDistancia() {
	Barcos::setDistancia((distancia + velocidad * 100));
	cout << "El barco " << name << " ha recorrido " << distancia << " metros de distancia" << endl;
}

void Barcos::stats() {
	if (nitro) {
		cout << "El Barco " << name << ", tiene "
			<< velocidad << " de velocidad, ha recorrido " << distancia << " metros y tiene nitro." << endl;
	}
	else {
		cout << "El Barco " << name << ", tiene "
			<< velocidad << " de velocidad, ha recorrido " << distancia << " metros y no tiene nitro." << endl;
	}
}