#include <stdlib.h>
#include <time.h>
#include "barcos.h"
#include <iostream>
#include <Windows.h>
using namespace std;



//Stats
void principio(Barcos& barco1, Barcos& barco2) {
	cout << "Chicos la partida empieza en nada preparados ahora diremos los concursantes: " << endl;
	Sleep(1000);
	barco1.stats();
	Sleep(1000);
	barco2.stats();
	Sleep(1500);
}

//Juego
void jugar(Barcos& b) {
	srand(time(NULL));
	int dado = rand() % 6+1 ;
	cout << "El barco " << b.getname() << " ha tirado el dado y ha sacado un " << dado << endl;
	b.setVelocidad((b.getvelocidad() + dado));
	cout << "Ahora tiene " << b.getvelocidad() << " de velocidad." << endl;
	if (b.getnitro()) {
		int option = 0;
		cout << "Quieres usar nitro?" << endl;
		while (option != 1 && option != 2) {
			cout << "Elige una de estas 2 opciones: " << endl;
			cout << "[1] Si" << endl;
			cout << "[2] No" << endl;
			cin >> option;
		}
		if (option == 1) {
			b.useNitro();
			b.setNitro(0);
		}
	}
}

void wins(Barcos& barco1, Barcos& barco2) {
	if (barco1.getdistancia() > barco2.getdistancia()) {
		cout << "The whinner is " << barco1.getname() << endl;
	}
	else if (barco1.getdistancia() == barco2.getdistancia()) {
		cout << "Habeis empatado." << endl;
	}
	else {
		cout << "The winner is " << barco2.getname() << endl;
	}
}

//Main
int main() {
	Barcos barco1("Merry", 0, 1, 0);
	Barcos barco2("Sunny", 0, 1, 0);
	
	principio(barco1, barco2);
	system("cls");
	for (size_t i = 0; i < 5; i++)
	{
		jugar(barco1);
		Sleep(1000);
		jugar(barco2);
		Sleep(2000);
		system("cls");
		cout << "La recta final chicos: " << endl;
		Sleep(1000);
		barco1.verDistancia();
		Sleep(1000);
		barco2.verDistancia();
		Sleep(2000);
		system("cls");
	}
	wins(barco1, barco2);
}

