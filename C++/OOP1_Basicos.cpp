#include <iostream>
using namespace std;

class Auto {
	
public:
	//Atributos
	string marca;
	string modelo;
	int anio;
	
	//Metodos
	void miMetodo() {
		cout << "Lista Vehiculos";
	}
	
	int velocidad(int maxVelocidad) {
		return maxVelocidad;
	}
	
	//Constructor con parametros (special method that is automatically called when an object of a class is created)
	Auto(string x,string y, int z) {
		marca = x;
		modelo = y;
		anio = z;
	}
	
};


int main(int argc, char *argv[]) {
	
	//Crear un Objeto "Auto"
//	Auto auto1;
//	auto1.marca = "BMW";
//	auto1.modelo = "X5";
//	auto1.anio = 1999;
	
	//Imprimir Valores
//	cout << auto1.marca << " " << auto1.modelo << " " << auto1.anio << "\n";
	
	//Llamar al metodo
//	auto1.miMetodo();
//	cout << endl;
	
	//Metodo devolver velocidad (metodo con argumento)
//	cout << "Velocidad Maxima: " << auto1.velocidad(200);
//	cout << endl;
	
	//Crear objeto llamando al constructor
	Auto auto2("Renault", "Kangoo", 2010);
		
	cout << auto2.marca << " " << auto2.modelo << " " << auto2.anio << " " << "\n";
	cout << auto2.velocidad(150);
	
	return 0;
}

