unset label
clear
set terminal jpeg
set output "Curva2.jpeg"
set title "Curva de la función exp(x) + x"
set xlabel "Eje x"
set ylabel "Eje y"
set grid
set xrange [-2:2]
set yrange [-2:2]
set style data linespoints
plot x + exp(x)