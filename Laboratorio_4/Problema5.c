/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema5.out Problema5.c"
#"Fecha:      05/09/22"
#"Librerias:  stdio"
#"Resumen     Programa que calcula el factorial de un número"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

//Se prototipa la función factorial
long factorial(int);

int main()
{
    //Se declara la variable fact que almacenará el número digitado por el usuario para luego obtener el factorial de dicho número
    int fact;
    //Se solicita al usuario el dígito
    printf("Digite un número para hallar su factorial\n");
    //Se guarda el valor digitado en la variable fact
    scanf("%d",&fact);
    //Se imprime el factorial del número solicitado
    printf("El factorial de %d es: %ld\n", fact, factorial(fact));

    return 0;
}

//Función recursiva que devuelve el factorial de un número
long factorial(int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}