/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema1.out Problema1.c"
#"Fecha:      05/07/22"
#"Librerias:  stdio"
#"Resumen     Programa que almacena números pares en un vector para luego ordenarlos de forma ascendente o descendente dependiendo de lo que solicite el usuario"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
//Se declaran las variables
int v[10];
char c;
//Se prototipan las funciones
void llenarV();
void imprimirV(char o);

int main(){
    //Función encargada de llenar al vector de números pares
	llenarV(); 
	//Se solicita el orden en que se quieren ver los elementos del vector
	puts("Elija el orden en que desea ver los elementos: \n'a'=ascendente\n'd'=descendente");
	scanf("%s", &c);
	//Se impide pasar al usuario si no ingresa lo solicitado usando un condicional
	while(c != 'd' && c != 'a'){
		puts("Digitó un carácter incorrecto. Vuelva a intentarlo");
		puts("Elija el orden en que desea ver los elementos: \n'a'=ascendente\n'd'=descendente");
		scanf("%s", &c);
	}
    //Se muestra el vector
	imprimirV(c); 
	return 0;
}

//Función para imprimir el vector
void imprimirV(char o){
	//Variables auxiliares
	int n = 1, k = 0;
	int a = 1;
	//Determinar si desea el orden contrario
	if (o == 'd'){
        //Cambia el sentido de recorrido del arreglo
		n = -1; 
        //Define el inicio y el final del recorrido
		k = 9; 
	}
	for (int i = k; i != 9-k+n; i += n){
        //Se muestra el valor del vector
		printf("%d\n", v[i]); 
	}
}

//Función para llenar el vector
void llenarV(){
	for (int i = 0; i < 10; i++){
		v[i] = (i + 1)*2;
	}
}

