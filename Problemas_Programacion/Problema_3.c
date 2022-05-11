/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_3.out Problema_3.c"
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
//En esta parte, el usuario ingresa a un ciclo del cual solo puede salir si se cumple la condición                               
    do {                                                    
        puts("Ingrese un número entero positivo:");
        scanf("%d", &n);
    } while (n<=0);
 //El ciclo va aumentando el valor de r hasta dejar de cumplir con la condición
    while (r*r<=n) { r++; }     
//Cuando r*r >= n, se imprime r-1 que sería el número mayor que cumple la condición                        
    printf("La raíz entera aproximada es: %d \n", r-1);     
return 0;
}