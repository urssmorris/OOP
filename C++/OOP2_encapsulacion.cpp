#include <iostream>
using namespace std;

class Empleado {
private:
	//atributo privado acceso restringido
	int salario;
	
public:
	//definir salario
	void setSalario(int s) {
		salario = s;
	}
	
	//tomar salario
	int getSalario() {
		return salario;
	}
};

int main(int argc, char *argv[]) {
	
	Empleado empleado1;
	
	empleado1.setSalario(100000);
	cout << empleado1.getSalario();
	
	
	return 0;
}

