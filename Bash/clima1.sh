#!/bin/bash
#curl wttr.in/Guatemala Con este comando se obtiene el clima en Guatemala.
curl -s wttr.in/Guatemala > ~/ejercicio_docker/valoresclima.sh #Usando este comando, se almacena la información de
                                                               #del comando curl en el archivo llamado valoresclima.sh
head -n 7 ./valoresclima.sh #Da la orden de solo leer las 7 primeras líneas del archivo valoresclima.sh
echo $leer
rm valoresclima.sh #Elimina el archivo valoresclima.sh
