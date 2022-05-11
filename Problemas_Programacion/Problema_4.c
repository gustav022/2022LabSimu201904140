/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_4.out Problema_4.c"
#"Fecha:      03/28/22"
#"Librerias:  stdio"
#"Resumen     Programa que lee números mayores a 1 y determina si son primos"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

int main() {
  //Se declaran e inicializan las variables
  int N, i = 2, primo = 1;
  //Se solicita al usuario un número para determinar si es primo
  puts("Ingrese un número entero: ");
  scanf("%d", &N);
  //Se inicia el bucle. Las condiciones a cumplir son: i < N - 1 && primo == 1
  while (i < N - 1 && primo == 1) {
    //Determinar si N es divisible entre i
    if (N % i == 0) {
      //Si resulta ser divisible, implica que no es primo, por lo que se cambia el valor de la variable
      primo = 0;
    }
    //Se aumenta el contador
    i++;
  }
  //Se usan condicionales para mostrar los dos posibles resultados
  if (primo == 0) {
    printf("%d no es primo. \n", N);
  } else {
    printf("%d es primo. \n", N);
  }
  return 0;
}