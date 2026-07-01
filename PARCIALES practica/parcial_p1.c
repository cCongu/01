#include <stdio.h>


void procesaNumero(int numero, int *mayor, int *sumaImpar) {
    *mayor = 0;
    *sumaImpar = 0;
    int digito;

    while (numero > 0) {
        digito = numero % 10;

        if (digito % 2 != 0) {
            if (digito > *mayor) {
                *mayor = digito;
            }
            *sumaImpar += digito;
        }

        numero /= 10;
    }
}

int main() {
    int n, mayor, suma;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    procesaNumero(n, &mayor, &suma);

    printf("Mayor digito impar: %d\n", mayor);
    printf("Suma de digitos impares: %d\n", suma);

    return 0;
}