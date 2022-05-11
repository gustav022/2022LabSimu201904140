/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_1.out Problema_1.c"
#"Fecha:      03/28/22"
#"Librerias:  stdio"
#"Resumen     Programa que realiza la media aritmética de los números ingresados"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

int main(){
//Se declara e inicializa las variables a utilizar
    float x = 0, med = 0;
    int i = 0, n = 0;
//Se valida el número de elementos ingresados hasta llegar a 3
    puts("Calculadora de la media aritmética");
    while (i<3)
    {   
//Solicitar al usuario ingresar los valores de los 3 números
        puts("Ingrese un número: ");
        scanf("%f",&x);
//Validar que sea positivo o 0
        if (x>=0)
        {
//Sí es cierto, se procede a acumular la cantidad de elementos positivos y sumar su valor
            n++;
            med+=x;
        }
        i++;
    }
//Validar si todos lo números son negativos
    if (n==0)
    {
//Sí es cierto, se imprime el siguiente mensaje
        puts("Los valores ingresados son todos negativos");
    }else
    {
//Si es falso, se imprime la media aritmética. Además se almacena la información obtenida en la variable med
        med=med/n;
        printf("La media aritmética de los datos es: %f \n", med);
    }
    
    
}