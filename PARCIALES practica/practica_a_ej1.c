#include <stdio.h>

void busqueda_parametro(int numero, int *mayor_num, int *suma_impares){
    *mayor_num = 0;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor_num){
                *mayor_num = digito;
            }
            *suma_impares+=digito;
        }
        numero /= 10;
    }
}

void main(){
    int numero, mayor_num, suma_impares;

    printf("Ingrese una cadena de numeros: ");
    scanf("%d", &numero);

      busqueda_parametro(numero, &mayor_num, &suma_impares);
    printf("funcion invocada: %d. mayor digito impar %d. suma impares %d",numero,mayor_num,suma_impares);
}