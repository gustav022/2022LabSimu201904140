#!/bin/bash
: << 'Header'
Autor:            Gustavo Alejandro Mejia Mansilla
Carnet:           201904140
Tipo de archivo:  Libreto para crear un archivo.c
Ejecución:        ./ejercicio2.sh
Resumen:          Archivo que crea encabezados de archivos de C.
Header

echo "Inserte el nombre del archivo:" #Comando echo hace que aparezca el texto entre comillas en la pantalla del usuario.
read Archivo #Comando read hace que se lea lo que se ha escrito en Archivo
if [ -n $Archivo ]; then  #Condicional que verifica si Archivo está vacío o no.
    echo "/*"> $Archivo".c"  #Escribe /* en el Archivo.c
    gcc --version > temporal #Se ejecuta el comando gcc --version para vericar la versión y esta se guarda en temporal.
    leerversion=$(head -n 1 temporal) #Variable ejecuta la primera línea del archivo llamado temporal.
    echo "Ingrese Resumen:" #Hace que aparezca el texto entre comillas en la pantalla del usuario.
    read resumen #Lee lo que se ha escrito.
    echo "Ingrese Entrada" #Hace que aparezca el texto entre comillas en la pantalla del usuario.
    read entrada #Lee lo que se ha escrito.
    echo "Ingrese Salida"  #Hace que aparezca el texto entre comillas en la pantalla del usuario.
    read salida #Lee lo que se ha escrito.
else
    echo "No se insertó nombre del archivo."
fi
rm temporal #Se elimina el archivo temporal.
Archivo1=$Archivo".c"
cat << EOF > $Archivo1 
/*
#"Autor:      $USER"
#"Compilador: $leerversion"
#"Compilado:  gcc -o $Archivo.out $Archivo.c"
#"Fecha:      $(date +%D)"
#"Librerias:  stdio"
#"Resumen     $resumen"
#"Entrada:    $entrada"
#"Salida:     $salida"
*/
//Librerias
#include <stdio.h>
//listar los pasos del pseudocódigo
EOF
exit 0 #Comando que desactiva los mensajes de advertencias del sistema.