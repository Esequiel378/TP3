/*
Realice un programa el cual solicite al usuario el ingreso de un valor entero “t” que será el tamaño de los arreglos a procesar.

Una vez ingresado el tamaño t de los arreglos, solicitar al usuario el ingreso de los t elementos enteros de DOS diferentes arreglos declarados como array1 y array2. Los valores a ingresar por el usuario deben ser mayores o iguales a 0 y menores o iguales a 10. Caso contrario solicitar reingreso hasta que el valor esté dentro de rango.

Ej: Ingrese el tamaño de los arreglos a procesar: 4

Ahora ingrese los 4 elementos del arreglo 1:

1
2
3
4

Ahora ingrese los 4 elementos del arreglo 2:

5
6
7
8

Una vez cargados array1 y array2; el programa deberá determinar un arreglo resultante de operaciones de potencia. Con array1 utilizado como las bases y array2 como los exponentes.

Por ejemplo con los valores ingresados anteriormente su programa debe determinar e imprimir en pantalla cada componente del arreglo exponente como:

exponente[i]=array1[i]arr
*/

#include <iostream>
#include <math.h>

#define EXIT_SUCCESS 0

void insert(int arr[], int n){

	// Bucle para asignar los valores al arreglo
	for (int i = 0; i < n; i++){
		
		int aux = -1; // Se declara aux = -1 para asegurarse de que entra en el bucle while
			
		while(aux < 0 || aux > 10){ // Bucle infinito mientras no se ingrese un valor correcto
			std::cin >> aux;
		}		
		
		arr[i] = aux; // Se asigna el valor de aux al arreglo
	}

}

int main(){
	
	// Declaraciones
	int n; std::cin >> n; // n = tamaño del arreglo
	
	int arr1[n];
	int arr2[n];
	int arr3[n];
	
	
	// Importante aclaror que al pasar un arreglo por parametro,
	// este se pasa como referencia
	
	// LLamadas a la funcion insertar
	insert(arr1, n);
	insert(arr2, n);
	
	// Bucle que calcula arr1 ** arr2, y lo almacena en arr3
	for (int i = 0; i < n; i++){
		
		arr3[i] = pow(arr1[i], arr2[i]);
		
	}
	
	// Bucle para mostrar arr3
	for (int i = 0; i < n; i++){
		
		std::cout << arr3[i] << " ";
		
	}
	
	
	// Fin del programa
	return EXIT_SUCCESS;
}
