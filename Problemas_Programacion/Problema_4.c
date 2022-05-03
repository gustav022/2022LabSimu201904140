/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_4 Problema_4.c"
#"Fecha:      03/28/22"
#"Librerias:  stdio"
#"Resumen     Programa que lee números mayores a 1 y determina si son primos"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

int i, N, contador=0;

int main(){
    printf("Ingrese un número: ");
    scanf("%d", &N);

    for (i=1; i<=N ; i++)
    {
        if (N%i==0)
        {
            contador++;
        }
        
    }
    

    return 0;
}
