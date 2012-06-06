// Ejercicio 1, practica 11.
// Cuenta el numero de veces que se repite un caracter dada una entrada.
// Santiago.
#include <iostream>

using namespace std;


int main(int argc, char *argv[]){
	int contador = 0; // Cuenta el numero de veces que se repite el caracter introducido.
	char c;
	while(cin.get(c)){
	if(c == argv[1][0]){
		contador++;
	}
	}
	cout << "La letra < " << argv[1] << " > aparece en el texto, " << contador << " veces." << endl;
}
