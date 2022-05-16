/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
#"Compilado:  gcc -o Problema1.out Problema1.c"
#"Fecha:      05/16/22"
#"Librerias:  stdio"
#"Resumen     Solución del primer problema del examen parcial"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
#include <math.h>

//Primero se definen las variables a usar en en código
float G=6.693E-11;
float Rt=6.378E6;
float Mt=5.9736E24;
float R= 287.06;
float L= 0.0065;
float g0= 9.81;
float T0= 288.15;
float P0= 101325.0;

//Datos del primer cohete
float E01= 3E7;
float TSFC1=3.248E-4;
float CD1=61.27;
float A1=201.06;
float M01=1.1E5;
float MF01=1.5E6;

//Datos del segundo cohete
float E02= 2.7E7;
float TSFC2=2.248E-4;
float CD2=61.27;
float A2=201.06;
float M02=1.1E5;
float MF02=1.5E6;

//Datos del tercer cohete
float E03= 2.5E7;
float TSFC3=2.248E-4;
float CD3=70.25;
float A3=215.0;
float M03=1.8E5;
float MF03=2.1E6;

//Se define la variable y
float y;

//Se prototipa las funciones a utilizar
float fatm(float datos[]);
float densidad();
float gravedad();
float fa(float y);
float absoluto(float x);


//Función principal
int main() {
    //Se utlizan vectores para almacenar la información de los cohetes
    float AhMun[]  ={E01,TSFC1,CD1,A1,M01,MF01};
    float AhauKin[]={E02,TSFC2,CD2,A2,M02,MF02};
    float Chac[]   ={E03,TSFC3,CD3,A3,M03,MF03};
    return 0;
}

//Función de densidad
float densidad() {
    float rho;
    rho = (P0/(R*T0))*pow((1-((L*y)/T0)),(g0/(R*L)));
    return rho;
}

float gravedad(){
    float g0;
    g0 = (G*Mt)/(pow((Rt+y),2));
}

float fatm(float datos[]){
    float f0;
    f0 = densidad()*datos[2]*datos[3];
}

float absoluto(float x){
    if (x<0)
        x = -x;
    return x;
}
