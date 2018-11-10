/*

Realice un programa el cual declare una matriz de 3 filas x 3 columnas de valores de doble precisión.

Luego solicite al usuario el ingreso de los 9 valores de doble precisión, el programa debe cargárlos en la matriz por COLUMNA.

Ejemplo de ejecucion:

Ingrese los 9 valores de la matriz:

1.2

2.3

3.5

6.5

4.3

6.7

8.9

0.9

2.2

La Matriz debe quedar:

1.2  6.5  8.9

2.3  4.3  0.9

3.5  6.7  2.2

Una vez cargado los datos en la matriz, el programa deberá calcular el promedio de todos los valores de la matriz (Para el ejemplo el promedio es 4.05)

Una vez determinado el promedio de la matriz, el programa debe convertir la matriz ingresada en una matriz triangular superior.

Aclaracion: Matriz triangular superior: dada una matriz cuadrada, una matriz triangular superior tiene todos los elementos por debajo de la diagonal principal nulos.

Ej. matriz triangular superior de la matriz anterior cargada:

1.2  6.5  8.9

0.0  4.3  0.9

0.0  0.0  2.2

Finalmente el programa debe imprimir en pantalla cuantos valores de la matriz triangular superior obtenida son mayores al promedio.

Ej. con los datos cargados:

SALIDA

3

*/

#include <iostream>

#define EXIT_SUCCESS 0
#define N 3

int main(){
	
	// Declaraciones
	double mat[N][N];
	double suma = 0;
	double prom;
	int k = 0; // elementos mayores al promedio
		
	// ¡OJO, LEER BIEN ESTA PARTE DEL CODIGO! ES IMPORTANTE QUE ENTIENDAS QUE ESTA PASANDO.
	// Ingresando valores a la matriz, por columna 
	for (int j = 0; j < N; j++){
		for (int i = 0; i < N; i++){
			
			std::cin >> mat[i][j]; // Ingreso de datos a la matriz, por columnas
			suma += mat[i][j]; 	   // Utilizamos es mismo bucle for para sumar los elemntos y sacar promedio, se ahorra tiempo
		}
	}
	
	prom = suma / (N * N); // Se calcula promedio
	
	// Tranformando la matriz en una matriz superior
	// Los bucles anidados recorren solo los elementos inferiores a la diagonal principal
	for (int i = 1; i < N; i++){
		for (int j = 0; j < i; j++){
			
			mat[i][j] = 0.0; // Se puede dejar siumplemente cero "0", pero pongo 0.0 para aclarar que estamos trabajando con doubles
			
		}
	}
	
	// Valores superiores al promedio
	// Los bucles anidados recorren solo la triangular superior
	for (int i = 0; i < N; i++){
		for (int j = i; j < N; j++){
			
			if (mat[i][j] > prom)
				k++;
			
		}
	}
	
	// imprime por pantalla los valores mayores al promedio
	std::cout << k;
	
	return EXIT_SUCCESS;
}
