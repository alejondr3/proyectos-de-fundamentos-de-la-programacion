#include <stdio.h>
int main() {
float numero1, numero2, numero3, multiplica, divide, suma, resta, sumageneral;

printf("ingrese el primero numero: ");
scanf("%f", &numero1);

printf("ingrese el segundo numero: ");
scanf("%f", &numero2);

printf("ingrese el tercer numero: ");
scanf("%f", &numero3);

multiplica = numero1 * numero2 * numero3;
divide = numero1 / numero2 / numero3;
suma = numero1 + numero2 + numero3;
resta = numero1 - numero2 - numero3;
sumageneral = multiplica + divide + suma + resta;

printf("la multiplicacion es: %.3f\n", multiplica);
printf("la division es : %.3f\n", divide);
printf("la suma es: %.3f\n", suma);
printf("la resta es: %.3f\n", resta);
printf("la sumageneral es: %.3f\n", sumageneral);

return 0;
}
