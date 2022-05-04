/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o MinCuadrados.out MinCuadrados.c -lm"
#"Fecha:      04/26/22"
#"Librerias:  stdio, math"
#"Resumen     Ejemplo del método matemático de mínimos cuadrados"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Se declaran e inicializan las variables globales
float x[]={1,2,3,4,5,6,7,8}, y[]={660.0,671.4,668.0,695.5,717.1,759.2,807.0,859.7};
//Se mide el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//Prototipar funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


void main(){
    //Se declaran las variables del problema
    float b, m, r, anh, ans, resp;
    //Se imprimen los valores de los vectores para que el usuario sepa la informacion
    imprimir(x);
    imprimir(y);
    //Se grafican los valores de la tabla inicial del problema
    system("gnuplot GrafParcial1a.gp");
    //Los valores de ecuación lineal, por medio de mínimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //Imprime la ecuación lineal
    printf("y = %fx + %f\n",m,b);
    //Imprime coeificiente de determinación el r cuadrado
    printf("Coeficiente de determinación: %f\n",r*r);
    //Se le pide al usuario que ingrese el año al que quiere saber la producción aproximada de cardamomo
    printf("Ingrese el año al que quiere saber la aproximación (el año debe de ser después de 2013):\n");
    scanf("%f",&anh); 
    printf("La aproximación para el año ingresado es:\n");
    ans = (anh - 2013);
    resp = m*ans + b;
    //Se imprime el valor de la producción de cardamomo en el año ingreasado por el usuario
    printf("%f \n", resp);
    //Se genera la gráfica de la aproximación
    system("gnuplot GrafParcial1b.gp");
}

//Imprimir los datos del vector que ingrese a la función
void imprimir(float datos[]){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f ",datos[i]);
    }
    puts("\n");
}

//Realiza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

//Realiza el "producto punto" entre dos vectores determinados
float sumaMulti(float datos1[], float datos2[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}