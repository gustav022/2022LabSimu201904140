unset label
clear
set terminal jpeg
set output "Curva1b.jpeg"
set title "Curva sobre la producción anual de cultivo de cardamomo"
set xlabel "Años"
set ylabel "Producción de cultivo de cardamomo (miles de quetzales)"
set grid
set xrange [-10:10]
set style data linespoints
plot y = 28.227352x + 602.714478