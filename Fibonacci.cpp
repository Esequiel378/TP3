/*
Complete el siguiente programa para que almacene en el arreglo fibonacci[ ] una sucesi�n de fibonacci.
La sucesi�n comienza con los n�meros 0 y 1, y a partir de estos, cada t�rmino es la suma de los dos anteriores.
Es decir, que el primer elemento (�ndice 0) deber� contener el valor 0, el segundo elemento el 1, y a partir del tercer elemento, la suma de los dos anteriores.

*/

// Bibliotecas
#include<iostream>
#include<cmath>

#define EXIT_SUCCESS 0

int main(){
	
	// Declaracion de variables
	int n;
	int current = 1;
	int prev = 0;
	
	// Ingreso por teclado
	std::cin >> n;
	
	// Mostramos cero como primer elemento	
	std::cout << "0 ";
	
	// Bucle para completar la serie
	for (int i = 1; i > 0 && i < n; i++){
				
		std::cout << current << " ";
		int aux = current;
		current += prev;
		prev = aux;
		
	}
	
	// Fin del programa
	return EXIT_SUCCESS;
}
