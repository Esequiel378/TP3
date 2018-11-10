/*
Codifique la definición de una función cuyo prototipo es:

void eliminarRepetidos(int conRepetir[], int N, int sinRepetir[], int& M); 

La función recibe como argumento un arreglo (conRepetir[]) de enteros de tamaño indeterminado y un entero N que representa la cantidad de elementos en el arreglo.  
A su vez recibe como argumento un arreglo de tamaño indeterminado y un entero por referencia M que representa la cantidad de elementos en el arreglo sinRepetir[].

La función debe copiar los elementos del arreglo conRepetir[] al arreglo sinRepetir[] pero sin repeitr valores a su vez debe almacenar en el argumento pasado 
por referencia M la cantidad de elementos sin repetir
*/
#include<iostream>

void eliminarRepetidos(int conRepetir[], int N, int sinRepetir[], int &M); // Declaracion de la funcion

int main(){
	
	// Declaraciones
	const int N = 5;
	int A[N]={1,2,100,1,3};
	int B[N];
	int M;
	
	// LLamada a la funcion eliminarRepetidos
	eliminarRepetidos(A,N,B,M);
	
	// Bucle que recorre el arreglo B para mostrar sus elementos
	for(int i=0;i<M;i++){
		
	    std::cout << B[i] << " ";
	}
	
	// Se imprime M (cantidad de numeros repetidos)
	std::cout << "\nN repetidos: " << M;
	
}

// ATENCION! SI SOLO ESTAS COPIANDO Y PEGANDO, ESTA FUNCIÓN ES TODO EL EJERCICIO, EL MAIN ES SOLO PARA DEBUG!
void eliminarRepetidos(int conRepetir[], int N, int sinRepetir[], int &M){
	
    M = 0;
    int k = 0; // variable auxiliar para verificar si un numero esta repetido
    bool rep = false;
    int count = 0;
	
	sinRepetir[count] = conRepetir[count];
	count++;
	
	// Bucle para ordenar el arreglo
	for (int i = 1; i < N; i++){
		for (int j = 0; j < count; j++){
		
			if (conRepetir[i] == sinRepetir[j]){
				
				rep = true;
				break;
			}
			
		}
		
		if (!rep){
			
			sinRepetir[count] = conRepetir[i];
			count++;
			
		}else{
			
			k++;
			rep = false;
		}
	}
    
    M = count;
}
