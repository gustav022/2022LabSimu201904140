/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema3.out Problema3.c -lm"
#"Fecha:      05/08/22"
#"Librerias:  stdio"
#"Resumen     Programa que solicita al usuario dos posiciones en coordenadas (x,y,z) para luego almacenarlas como vectores y después calcular el producto vectorial y escalar entre dichos vectores"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//listar los pasos del pseudocódigo
//Se declara e inicializa la variable general
int n = 3;
//Se prototipa la función imprimir
void imprimir(int datos[]);
int suma(int datos[]);
int prodpunto(int datos1[], int datos2[]);
int sumaV(int datos1[], int datos2[], int resultado[]);
int productoV(int datos1[], int datos2[], int resultado[]);

int main(){
    //Se declaran los vectores
    int A[n];
    int B[n];
    int C[n];
    int D[n];
    float m,k;
    //Se declaran e inicializan las variables locales
    int i, dot, total=0;
    //Uso de un ciclo for para poder ingresar los valores al vector
    for ( i = 0; i < n; i++)
    {
        puts("Ingrese un número para el vector A:");
        scanf("%d",&A[i]);
    }
    printf("--------------------------------------------------------\n");
    printf("\nEl vector A es:\n");
    imprimir(A);
    printf("--------------------------------------------------------\n");
    m = sqrt(suma(A));
    printf("La magnitud del vector A es: %f\n",m);
    printf("--------------------------------------------------------\n");
    for ( i = 0; i < n; i++)
    {
        puts("Ingrese un número para el vector B:");
        scanf("%d",&B[i]);
    }
    printf("--------------------------------------------------------\n");
    printf("\nEl vector B es:\n");
    imprimir(B);
    printf("--------------------------------------------------------\n");
    k = sqrt(suma(B));
    printf("La magnitud del vector B es: %f\n",k);
    printf("--------------------------------------------------------\n");
    C[n] = sumaV(A,B,C);
    printf("\nLa suma de los vectores A y B es:\n");
    imprimir(C);
    printf("--------------------------------------------------------\n");
    dot = prodpunto(A,B);
    printf("El producto punto entre A y B es: %d\n",dot);
    printf("--------------------------------------------------------\n");
    D[n] = productoV(A,B,D);
    printf("\nEl producto vectorial de los vectores A y B es:\n");
    imprimir(D);
    printf("--------------------------------------------------------\n");
    return 0;
}

//Imprimir los datos del vector que ingrese a la función
void imprimir(int datos[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",datos[i]);
    }
    puts("\n");
}

//Realiza la suma de los elementos de un vector ingresado
int suma(int datos[]){
    int resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i]*datos[i];
    }
    return resp;
}

//Realiza el producto punto entre dos vectores determinados
int prodpunto(int datos1[], int datos2[]){
    int resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}

//Realiza la suma entre dos vectores determinados
int sumaV(int datos1[], int datos2[], int resultado[]){
    for (int i = 0; i < n; i++)
    {         
       resultado[i] = datos1[i] + datos2[i];
    }
    return resultado[n];
}

//Realiza el producto vectorial entre dos vectores determinados
//Se declara la variable "resultado" que almacenará las respuestas de las operaciones entre las componentes
int productoV(int datos1[], int datos2[], int resultado[]){
    {         
       resultado[0] = datos1[1]*datos2[2] - datos1[2]*datos2[1];
       resultado[1] = datos1[2]*datos2[0] - datos1[0]*datos2[2];
       resultado[2] = datos1[0]*datos2[1] - datos1[1]*datos2[0];
    }
    return resultado[n];
}