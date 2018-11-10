/*

Realice un programa el cual solicite al usuario el ingreso de un valor entero “n” que será la cantidad de productos a procesar.

Una vez ingresado n, se deberá crear un matriz de n Filas x 2 Columnas de valores tipo float.

Luego se debe solicitar al usuario el ingreso de los n x 2 valores floats de la matriz.

La columna 0, tendrá los precios de venta por menor de los productos y la columna 1 los precios de venta por mayor.

Los productos se identificarán por su número de FILA (subíndice).

Al ingresar los datos se debe verificar SIEMPRE que el valor de la columna 1 sea menor al de la columna 0 por ser precio por mayor. Sino solicitar reingreso hasta que sea válido.

Una vez cargada la matriz, el programa debe determinar el mayor porcentaje de descuento. Debe imprimir por pantalla un mensaje indicando el porcentaje de descuento con 
Formato de dos decimales.

Ejemplo de ejecución:

Cantidad de elementos a procesar 3

Ingrese los precios para los productos:

11.50

8.20

10.30

9.50

14.50

9.90

SALIDA:

El producto con mayor descuento tiene un 31,72 %.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Aclaración:

La matriz cargada debe quedar:

11.50    8.20

10.30    9.50

14.50    9.90

Answer:(penalty regime: 

*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

#define EXIT_SUCCESS 0

void ingresar(float mat[][2], int N){ // Ingresar datos por teclado
	
	for (int i = 0; i < N; i++){ // Recorre el arreglo
				
		std::cin >> mat[i][0]; // Ingresa precio por menor
		
		do{
			
			std::cin >> mat[i][1]; // Ingresa precio por mayor
			
		}while(mat[i][0] <= mat[i][1]); // Validacion de entrada
		
	}
}

int main(){
	
	// Declaraciones 
	int N; std::cin >> N;
	
	float mat[N][2];
	float desc[N];
	
	float max;
	
	// Llamada a la funcion
	ingresar(mat, N);
	
	// Obtenemos todos los descuentos
	for (int i = 0; i < N; i++){
		
		desc[i] = 100 - (mat[i][1] / mat[i][0] * 100);
	}
	
	// Se establece el primer descuento como el maximo
	max = desc[0];
	
	// Buscamos el moyor descuento
	for (int i = 0; i < N; i++){
		
		if (desc[i] > max)
			max = desc[i];
		
	}
	
	// Salida por consola
	std::cout << std::fixed << std::setprecision(2) << max;
	
	return EXIT_SUCCESS;
}
