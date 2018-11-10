/*

Codifique una función cuyo prototipo es:

 void matrizNueva (float original[][N], float nueva[][N], float promedios[N]);

donde N es una constante definida globalmente. La función recibe como argumento dos matrices cuadradas y un arreglo de elementos float.

Primero la función debe calcular los promedios de cada columna de la matriz "original" y almacenarlos en el arreglo "promedios".

Ej:

Matriz original

1.1   2.2   3.3

4.4   5.5   6.6

7.7   8.8   9.9

Arreglo promedios

4.4   5.5   6.6

Una vez almacenado los promedios en el arreglo, la función debe cargar los datos en la matriz "nueva" según corresponda:

Los elementos de la primera columna de la matriz “original” se deben comparar con el primer elemento del arreglo “promedios”, 
los elementos de la segunda columna de la matriz se debe comparar con el segundo elemento del arreglo y asi sucesivamente.

Si al comparar el valor del elemento de la columna de la matriz "original" es mayor al elemento del arreglo "promedios",
 la matriz “nueva” en esa posicion debe tener un 1; si es menor un -1 y si es igual un 0.

 

Ej:

Matriz original

1.1   2.2   3.3

4.4   5.5   6.6

7.7   8.8   9.9

Arreglo promedios (con promedios de columnas)

4.4   5.5   6.6

Matriz nueva

-1     -1    -1

 0      0     0

 1      1     1

*/

void matrizNueva (float original[][N], float nueva[][N], float promedios[N]){
	
	// Bucle que recorre el la matriz original
	for (int j = 0; j < N; j++){
		
		float aux = 0; // Variable auxiliar
		
		for (int i = 0; i < N; i++){
			
			aux += original[i][j]; // Sumando los elementos de cada columna
			
		}
		
		promedios[j] = aux / N; // Guardando promedio en arreglo
	}
	
	// Generando los elemento de la matriz nueva
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			
			if(original[i][j] < promedios[j])
				nueva[i][j] = -1;
			
			else if(original[i][j] > promedios[j])
				nueva[i][j] = 1;
			
			else if(original[i][j] == promedios[j])
				nueva[i][j] = 0;	
		}
	}
}
