/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema6.out Problema6.c"
#"Fecha:      05/10/22"
#"Librerias:  stdio"
#"Resumen     Programa que realiza 4 sumatorias distintas donde el usuario elige el"
#"Entrada:    USB"
#"Salida:     USB"
*/
// Librerias.
#include <math.h>
#include <stdio.h>

#define PrC -0.618033   // Se define el valor constante (1-sqrt(5))/(2)
#define SeC 1.618033    // Se define el valor constante (1+sqrt(5))/(2)
#define TeC 0.447213    // Se define el valor constante (1/sqrt(5))

//Se prototipan las funciones de las sumatorias
float PrimerSum(int n);
float SegundaSum(int n);
float TerceraSum(int n);
float CuartaSum(int n);

int main() {
    //Se declaran las variabls
    int n;
    //Se utiliza un bucle del cual el usuario solo puede salir si ingresa n>=0
    do {
        printf("Digite un número entero mayor o igual a cero: ");
        scanf("%d", &n);
    } while (n < 0);
    //Se muestran los resultados de las funciones
    printf("(a) La sumatoria desde k=1 hasta n=%d de ∑ k²(k-3) es:\t\t\t\t\t\t\t%.2f\n", n, PrimerSum(n));
    printf("(b) La sumatoria desde k=2 hasta n=%d de ∑ 3/(k-1) es:\t\t\t\t\t\t\t%.2f\n", n, SegundaSum(n));
    printf("(c) La sumatoria desde k=1 hasta n=%d de ∑ ((1+√(5))/2)^k/√(5) - ((1-√(5))/2)^k/√(5) es:\t\t%.2f\n", n, TerceraSum(n));
    printf("(d) La sumatoria desde k=2 hasta n=%d de ∑ 0.1(3*2^(k-2)+4) es:\t\t\t\t\t\t%.2f\n", n, CuartaSum(n));
return 0;
}

//Expresión: ∑ k²(k-3)
float PrimerSum(int n){
    //Se declaran y definen variables
    int k;
    float res=0;
    //El conteo de la variable debe de llegar hasta n
    for (k = 1; k <= n; k++)
        //Se ejecuta el cálculo
        res += pow(k,2)*(k-3);
    //Se devuelve la respuesta
    return res;
}

//Expresión: ∑ 3/(k-1)
float SegundaSum(int n){
    //Se declaran y definen variables
    int k;
    float res=0;
    //El conteo de la variable debe de llegar hasta n
    for (k = 2; k <= n; k++)
        //Se ejecuta el cálculo
        res += 3.0/(k-1);
    //Se devuelve la respuesta
    return res;
}

//Expresión: ∑ ((1+√(5))/2)^k/√(5) - ((1-√(5))/2)^k/√(5)
float TerceraSum(int n){
    //Se declaran y definen variables
    int k;
    float res=0;
    //El conteo de la variable debe de llegar hasta n
    for (k = 1; k <= n; k++)
        //Se ejecuta el cálculo
        res += TeC*pow(SeC, k) - TeC*pow(PrC, k);
    //Se devuelve la respuesta
    return res;
}

//Expresión: ∑ 0.1(3*2^(k-2)+4)
float CuartaSum(int n){
    //Se declaran y definen variables
    int k;
    float res=0;
    //El conteo de la variable debe de llegar hasta n
    for (k = 2; k <= n; k++)
        //Se ejecuta el cálculo
        res += 0.1*(3*pow(2, k-2)+4);
    //Se devuelve la respuesta
    return res;
}
