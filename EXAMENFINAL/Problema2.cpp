/*
#"Autor:      gustavo"
#"Compilador: g++ (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  g++ -o Problema2.out Problema2.cpp"
#"Fecha:      05/16/22"
#"Librerias:  iostream"
#"Resumen     Solución del segundo problema del examen final"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias

#include <iostream>

//Clase: Cohete
class Cohete{
public:
  //Atributos
  //Nombre
  string name; 
  //Características de cohetes.
  float E0, TSFC, CD, A, M0, Mf0; 
  //Posición inicial.
  float y0; 
public:
  //Constructor
  Cohete(string nombre, float energia, float tsfc, float cd, float area, float masa, float combustible, float pos){
    name = nombre;
    E0 = energia;
    TSFC = tsfc;
    CD = cd;
    A = area;
    M0 = masa;
    Mf0 = combustible;
    y0 = pos;
  }
//Destructor
  ~Cohete(){}; 

