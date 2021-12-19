#include <iostream>
using namespace std;

//Clase Base(parent) desde donde se heredan
class Vehiculo {
public:
	string marca = "Ford";
	void bocina(){
		cout << "Tuuu \n";
	}
};

//Clase derivada(child)
class Auto: public Vehiculo{
public:
	string modelo = "Mustang";
};

int main(int argc, char *argv[]) {
	
	Auto miAuto;
	miAuto.bocina();
	cout << miAuto.marca + " " + miAuto.modelo;
	
	
	return 0;
}

