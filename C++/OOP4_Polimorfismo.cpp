#include <iostream>
using namespace std;

class Animal {
public:
	void sonidoAnimal() {
		cout << "Sonido del animal \n";
	}
};

class Perro : public Animal {
public:
	void sonidoAnimal() {
		cout << "El perro hace guau \n";
	}
};

class Gato : public Animal {
public:
	void sonidoAnimal() {
		cout << "El gato hace miau \n";
	}
};

int main(int argc, char *argv[]) {
	
	Animal miAnimal;
	Perro miPerro;
	Gato miGato;
	
	miAnimal.sonidoAnimal();
	miPerro.sonidoAnimal();
	miGato.sonidoAnimal();
	
	return 0;
}

