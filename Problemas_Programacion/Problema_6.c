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
    int FM, N, fila, i;         // Definimos variables.
    float A;
    puts("----Calculadora del área de un polígono, dado sus vértices----");
    do {                        // Pedimos el número de vértices.
        puts("Escriba el número de vértices que tendrá el polígono. El número debe ser mayor o igual que 3.");
        scanf("%d", &FM);
    } while (FM<3);

    int matriz[FM][2];          // Declaramos la matriz como una de FM filas x 2 columnas.

    puts("--------------------------------");
    puts("Ingrese las coordenadas de los vértices del polígono.");
    puts(" • Separe las entradas de las coordenadas por un espacio o un enter. Y las coordenadas por enters.");
    puts(" • Deben ser números enteros.");
    puts(" • Las coordenadas deben de ser ingresadas ordenadamente, de tal forma que vayan en contra de las manecillas del reloj.");
    puts(" • El cálculo no funciona si el polígono se intersecta a si mismo o si tiene agujeros.");
    puts("--------------------------------");
    for (fila = 0; fila < FM; fila++) {                                     // Se pide ingresar los valores a la matriz. Fila por fila,
        scanf("%d %d", &matriz[fila][0], &matriz[fila][1]);                 // las dos columnas de un solo.
    }

    puts("Las coordenadas de los vértices del polígono son:");
    for (fila = 0; fila < FM; fila++) {                                     // Se muestran las coordenadas ingresadas.
        printf("(%d, %d)\n", matriz[fila][0], matriz[fila][1]);
    }

    N = FM-1;                                                               // Definimos la variable N

    for (i = 0; i < N; i++) {                                               // Hacemos los cálculos que corresponden a la sumatoria.
        A += (matriz[i][0]*matriz[i+1][1]) - (matriz[i+1][0]*matriz[i][1]);
    }
    A += (matriz[N][0]*matriz[0][1])-(matriz[0][0]*matriz[N][1]);           // Hacemos el cálculo que está afuera de la sumatoria.
    printf("El área del polígono es: %.2f\n", A/2);                         // Mostramos el resultado.
return 0;
}