#include <stdio.h>
int main() {
float lunes, martes, miercoles, jueves, viernes, sabado, domingo, ganancia_total, iva, sumatotal;

printf("ingrese el dia lunes: ");
scanf("%f", &lunes);

printf("ingrese el dia martes: ");
scanf("%f", &martes);

printf("ingrese el dia miercoles: ");
scanf("%f", &miercoles);

printf("ingrese el dia jueves: ");
scanf("%f", &jueves);

printf("ingrese el dia viernes: ");
scanf("%f", &viernes);

printf("ingrese el dia sabado: ");
scanf("%f", &sabado);

printf("ingrese el dia domingo: ");
scanf("%f", &domingo);

sumatotal = lunes + martes + miercoles + jueves + viernes + sabado + domingo;
iva = sumatotal * 0.13;
ganancia_total = sumatotal - iva;

printf("la ganancia total es: %.2f\n", ganancia_total);
printf("el iva total es: %.2f\n", iva);
printf("la sumatotal total es: %.2f\n", sumatotal);


return 0;
}
