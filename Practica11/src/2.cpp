// Ejercicio 2, practica 11.
// Recibe como argumento un numero y se le pasa un texto por consola,
// el programa deberá mostrar el numero de palabras con ese numero de 
// argumentos.
// Santiago.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]){

	int contador = 0;
	int cont = 0;
	char c;
	
	if(argc != 2){
		cout << "El numero de arugumentos introducidos no es valido." << endl;
		return 1;
	}	

	while(cin.get(c)){
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			cont++;
		}else{
			if(cont == atoi(argv[1])){
				contador++;
			}
			cont = 0;
			}
	}
	cout << "En el texto, hay " << contador << " palabras con " << argv[1] << " letras." << endl;
}
