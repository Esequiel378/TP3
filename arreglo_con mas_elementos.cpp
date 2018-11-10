/*

Realice un programa el cual solicite al usuario el ingreso de un valor entero “t” que será el tamaño de los arreglos a procesar.

Una vez ingresado el tamaño t de los arreglos, solicitar al usuario el ingreso de los t elementos enteros de DOS diferentes arreglos declarados como array1 y array2 (respete nombres).

Los valores a ingresar por el usuario deben ser enteros PARES mayores o iguales a 0 y menores o iguales a 50. Caso contrario solicitar reingreso hasta valor dentro de rango.

Ejemplo:

Ingrese cantidad de elementos: 4

Ingrese 4 elementos del array1:

2

6

24

12

Ingrese 4 elementos del array2:

52

Error, reingrese dentro de rango solicitado.

2

4

8

36

El programa deberá determinar e imprimir un mensaje indicando el nombre del arreglo que contenga la mayor cantidad de elementos mayores comparando elemento a elemento los arreglos (en caso de ser iguales los elementos no se consideran).

Si al finalizar la comparación ambos arreglos tienen igual cantidad de elementos mayores al otro arreglo imprimir mensaje “EMPATE”.

 

Ej. con los valores cargados anteriormente:

SALIDA.

El arreglo con mayor cantidad de elementos mayores es el array1.

----------------------------------------------------------------------------------------------------------

Aclaración con los datos ingresados en el ejemplo el calculo:

Array1[0] = Array2[0]

Array1[1] > Array2[1]

Array1[2] > Array2[2]

Array1[3] < Array2[3]

El arreglo con más elementos mayores es el array1.

*/
#include <iostream>

#define EXIT_SUCCESS 0

void ingresar(int arr1[], int N){ // Funcion para pedir al usurio ingresar los elementos del arreglo
	
	// Bucle que recorre el arreglo
	for (int i = 0; i < N; i++){
		
		do{
			std::cin >> arr1[i];	
			
		}while(arr1[i]%2 != 0 || arr1[i] < 0 || arr1[i] > 50); // Vr}erificacion de entrada
	}
}

int main(){
	
	// Declaraciones
	int N; std::cin >> N;
	
	int arr1[N];
	int arr2[N];
	
	// Contador de elementos mayores
	int a1 = 0; 
	int a2 = 0;
	
	// Llamada de funciones
	ingresar(arr1, N);
	ingresar(arr2, N);
	
	// Comprobando elementos mayores
	for (int i = 0; i < N; i++){
		
		if(arr1[i] > arr2[i])
			a1++;
			
		else if (arr1[i] < arr2[i])
			a2++;
	}
	
	// Salida por pantalla	
	if (a1 > a2)
		std::cout << "El arreglo con más elementos mayores es el array1";
	
	else if (a1 < a2)
		std::cout << "El arreglo con más elementos mayores es el array2";
		
	else
		std::cout << "EMPATE";
		
	return EXIT_SUCCESS;
}
