unset label
clear
set terminal jpeg
set output "Curva1a.jpeg"
set title "Curva sobre la producción anual de cultivo de cardamomo"
set xlabel "Año"
set ylabel "Producción de cultivo de cardamomo (miles de quetzales)"
set grid
set style data linespoints
plot "DatosParcial" using 1:2
