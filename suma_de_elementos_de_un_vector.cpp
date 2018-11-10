/*

Escriba un programa que como primer paso pida con un "cin" que el usuario ingrese un número entero entre 1 y 10 
el cual va a representar la cantidad de elementos de un vector de números enteros. Luego de ingresar este número, 
el programa debe pedir nuevamente mediante "cin" que se ingresen todos los números del vector. 
En ningún caso es necesario que el programa imprima un mensaje mediante "cout". Cuando el vector este completo, 
el programa debe calcular un nuevo vector de igual longitud que el vector ingresado por el usuario 
y en donde el elemento en la posición 'k' del nuevo vector es la suma de todos los números del vector 
que ingreso el usuario excepto el numero de la posición 'k' de dicho vector.
 Finalmente el programa debe imprimir por pantalla los números del nuevo vector separados por un espacio.

*/

#include <iostream>

#define EXIT_SUCCESS 0

int main(){
	
	// Declaraciones
	int n; std::cin >> n;
	int arr1[n];
	int arr2[n];
	
	// Bucle para asignar los elemento a un vector 
	// seria buena practica meter este codigo en una funcion ;)
	for (int i = 0; i < n; i++){
		
		int aux = -1; // Se declara aux = -1 para asegurarse de que entre en el bucle while
			
		while(aux < 0 || aux > 10){ // Bucle infinito mientras no se intoduzca un valor correcto
			std::cin >> aux;
		}		
		
		arr1[i] = aux; // Se asigna aux al arreglo
	}
	
	// Bucle para calcular el nuevo vector
	for (int i = 0; i < n; i++){
		
		int aux = 0; // variable auxiliar inicializada en cero
		
		// Bucle para añadir la suma de los elementos distintos de i
		for (int j = 0; j < n; j++){
				
			if (j != i){ // verifica que el elemnto j sea distinto que i
				aux += arr1[j]; 
				
			}
			
		}
		
		arr2[i] = aux;
		
	}
	
	// Se muestra por pantalla los valores del vector arr2
	for (int i = 0; i < n; i++){
		
		std::cout << arr2[i] << " ";
		
	}
				
	// Fin del programa
	return EXIT_SUCCESS;
}
