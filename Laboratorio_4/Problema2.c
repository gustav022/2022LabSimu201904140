/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema2.out Problema2.c"
#"Fecha:      05/08/22"
#"Librerias:  stdio"
#"Resumen     Programa que solicita 5 números enteros que serán guardados en un vector para luego ordenar los números ingresados de forma ascendente."
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

//Se declara e inicializa la variable general
int n = 5;
//Se prototipa la función imprimir
void imprimir(int datos[]);

int main(){
    //Se declara el vector
    int A[n];
    //Se declaran e inicializan las variables locales
    int i, total=0;
    //Uso de un ciclo for para poder ingresar los valores al vector
    for ( i = 0; i < n; i++)
    {
        puts("Ingrese un número para el vector:");
        scanf("%d",&A[i]);
    }
    imprimir(A);
    puts("Ordenando los valores");
    int interruptor = 1;
    int pasada, j;
    //Bucle que controla la cantidad de iteraciones
    for (pasada = 0; pasada < n-1 && interruptor; pasada++)
    {
        interruptor = 0;
        //Maneja el paso por el vector
        for (j = 0; j < n-pasada-1; j++)
        {
            //Se valida que el elemento seleccionado sea mayor al siguiente
            if (A[j] > A[j+1])
            {
                int aux;
                printf("Cambio %d %d a ",A[j],A[j+1]);
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
                printf("%d %d \n",A[j],A[j+1]);
            }
            interruptor = 1;
        }   
    }
    puts("\nVector Ordenado:");
    for (int i = 0; i < n; i++)
    {
        /* Se ingresan los números */
        printf("%d ",A[i]);
    }
    puts("\nFIN");
    return 0;
}

//Imprimir los datos del vector que ingrese a la función
void imprimir(int datos[]){
    puts("\nValor de los datos:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",datos[i]);
    }
    puts("\n");
}


