/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema_6.out Problema_6.c"
#"Fecha:      05/10/22"
#"Librerias:  stdio"
#"Resumen     Programa que calcula el área de un polígono a partir de una serie de coordenadas de sus vértices"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

int main() {
    //Se definen las variables a usar
    int M, N, fila, i;         
    float A;
    puts("----Calculadora del área de un polígono a partir de sus vértices----");
    //Se solicita el número de vértices del polígono
    do {                        
        puts("Ingrese la cantidad de vértices que tendrá el polígono. El número debe ser mayor o igual que 3.");
        scanf("%d", &M);
    } while (M<3);

     //Se declara la matriz como una de M filas x 2 columnas.
    int matriz[M][2];         
    puts("--------------------------------");
    puts("Ingrese las coordenadas de los vértices del polígono.");
    puts(" • Separe las entradas de las coordenadas por un espacio o un enter. Y las coordenadas por enters.");
    puts(" • Deben ser números enteros.");
    puts(" • Las coordenadas deben de ser ingresadas ordenadamente, de tal forma que vayan en contra de las manecillas del reloj.");
    puts(" • El cálculo no funciona si el polígono se intersecta a si mismo o si tiene agujeros.");
    puts("--------------------------------");
     //Se solicita al usuario ingresar los valores a la matriz. Fila por fila, las dos columnas de un solo
    for (fila = 0; fila < M; fila++) {                                     
        scanf("%d %d", &matriz[fila][0], &matriz[fila][1]);                 
    }
    //Se muestran las coordenadas ingresadas
    puts("Las coordenadas de los vértices del polígono son:");
    for (fila = 0; fila < M; fila++) {                                     
        printf("(%d, %d)\n", matriz[fila][0], matriz[fila][1]);
    }
    //Se define la variable N
    N = M-1;                                                               
    //Se ejecutan los cálculos correspondientes a la sumatoria
    for (i = 0; i < N; i++) {                                               
        A += (matriz[i][0]*matriz[i+1][1]) - (matriz[i+1][0]*matriz[i][1]);
    }
    //Se realiza el cálculo que está afuera de la sumatoria
    A += (matriz[N][0]*matriz[0][1])-(matriz[0][0]*matriz[N][1]);       
    //Se imprime el resultado
    printf("El área del polígono es: %.2f\n", A/2);                         
return 0;
}