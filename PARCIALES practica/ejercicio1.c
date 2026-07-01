#include <stdio.h>

void ejercicio1(int numero, int *mayor, int *suma){
    *mayor = 0;
    *suma = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor){
                *mayor = digito;
            }
            *suma += digito;
        }
        numero /= 10;
    }
}

void main(){
    int numero, mayor, suma;

    printf("Ingrese una cadena: ");
    scanf("%d", &numero);

    ejercicio1(numero, &mayor, &suma);
    printf("Su cadena %d, mayor: %d, suma: %d", numero,mayor,suma);
}