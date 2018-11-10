/*

Realice un programa el cual solicite al usuario el ingreso de un valor entero “n” que será la cantidad de productos a procesar.

Una vez ingresado n, se deberá crear un matriz de n Filas x 2 Columnas de valores tipo float.

Luego se debe solicitar al usuario el ingreso de los n x 2 valores floats de la matriz.

La columna 0, tendrá los precios de venta de los productos y la columna 1 el porcentaje de descuento por pago al contado.

Los productos se identificarán por su número de FILA (subíndice).

Al ingresar los datos se debe verificar SIEMPRE que el valor de la columna 1 sea mayor a 5 y menor a 50 (representa porcentaje de descuento por pago contado). 
Sino solicitar reingreso hasta que sea válido.

Una vez cargada la matriz, el programa debe determinar el producto mas económico pagando de contado. Debe imprimir por pantalla un mensaje indicando el precio, 
con formato de dos decimales, del producto más económico

*/

#include <iostream>
#include <stdio.h>

#define EXIT_SUCCESS 0

int main(){
	
	// Declaracion de variables
	int n; std::cin >> n;
	
	float min = 0;
	float aux = 0;
	
	// Declaracion del arreglo
	float arr[n][2];
	
	// Ingreso de datos
	for (int i = 0; i < n; i++){
		
		std::cin >> aux; // Pide al usuario ingresar el precio
		
		arr[i][0] = aux; // Almacena el precio en la primera columna del arreglo
		
		aux = 0; // iguala aux a cero para asugarse de qeu entre en bucle while
		
		while(aux > 50 || aux < 5){ // se queda en el bucle mientras el usuario no ingrese un valor adecuado
			
			std::cin >> aux; // solicita ingresar el descuento
			
		}
		
		arr[i][1] = aux; // Almacena en descuento del producto en la segunda columna del arreglo
	}
	
	// Obteniendo el producto con el menor precio
	min = arr[0][0] - (arr[0][0] * (arr[0][1] / 100.f)); // Establece que el producto con el menor precio el el primero del arreglo
	
	for (int i = 1; i < n; i++){
		
		aux = arr[i][0] - (arr[i][0] * (arr[i][1] / 100.f)); // Almacena en aux el precio del siguiente producto al aplicar el descuento
		
		if (aux < min) // Verifica si el precio del producto aux es menor que el precio del producto que actualmente se encuentra en min
			min = aux; // Dado el caso el producto con el menor precio ahora es aux
			
	}
	
	printf("El producto mas economico pagando contado cuesta $ %.2f", min); // Imprime el resultado en pantalla
	
	// Fin del programa
	return EXIT_SUCCESS;
}
