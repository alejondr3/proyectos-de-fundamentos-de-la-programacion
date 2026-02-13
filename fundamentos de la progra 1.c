//primera clase de fundamentos de la programacion
#include <stdio.h>
int main() {
float numero1, numero2, numero3, numero4, numero5, resta, suma, promedio;

printf("Ingrese el primer numero: ");
scanf("%f", &numero1);
printf("Ingrese el segundo numero: ");
scanf("%f", &numero2);
printf("Ingrese el tercer numero: ");
scanf("%f", &numero3);
printf("Ingrese el cuarto numero: ");
scanf("%f", &numero4);
printf("Ingrese el quinto numero: ");
scanf("%f", &numero5);

suma= numero1 + numero2 + numero3 + numero4 + numero5;
promedio= suma/5;
printf("la suma es: %.2f\n", suma );
printf("el promedio es: %.2f\n", promedio );

return 0;









}
