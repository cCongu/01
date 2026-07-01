#include <stdio.h>

void ejercicio1 (int numero, int *mayor_impar, int *suma_impares){
    *mayor_impar = -1;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if (digito % 2 != 0){
            if(digito > *mayor_impar){
                *mayor_impar = digito;
            }
            *suma_impares += digito;
        }
        numero /= 10;
    }
}

void main(){
    int numero,mayor,suma;

    printf("Ingrese una cadena de numeros: ");
    scanf("%d", &numero);

    ejercicio1(numero, &mayor, &suma);
    printf("Cadena: %d, Mayor digito impar: %d, Suma digitos impares: %d",numero,mayor,suma);
}