/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_3 Problema_3.c"
#"Fecha:      03/28/22"
#"Librerias:  stdio"
#"Resumen     Programa que calcula la raíz cuadrada entera por defecto de un número N positivo dado"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

int main() {
// Se definen e inicializan las variables
int n=0, r=1;           
// El usuario entra en un ciclo del cual solo puede salir si se cumple la condición.                                   
    do {                                                    
        puts("Ingrese un número entero positivo:");
        scanf("%d", &n);
    } while (n<=0);
 // El ciclo aumenta el valor de r hasta que se deje de cumplir la condición.
    while (r*r<=n) { r++; }     
// En dado caso, se imprime (r-1). Que es el mayor número que cumplió la condición.                           
    printf("La raíz entera aproximada es: %d \n", r-1);     
return 0;
}