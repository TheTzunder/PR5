#pragma once
#include <iostream>

class Barcos
{
private:
	int nitro =1;
	std::string name;
	int velocidad=0;
	int distancia=0;

public: //metodos

	// constructor

	Barcos(std::string pName, int pVelocidad, int pNitro, int pDistancia);



	// Get entra atribu

	int getvelocidad();
	std::string getname();
	int getnitro();
	int getdistancia();

	// Set edita

	void setVelocidad(int pVelocidad);
	void setNitro(int pNitro);
	void setName(std::string pName);
	void setDistancia(int pDistancia);


	// Methods
	void useNitro();
	void verDistancia();
	void stats();



};

