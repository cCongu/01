#include <stdio.h>
void analizar(int n, int *menorImpar, int *cantIguales) {
    int ultimoDigito = n % 10;
    *menorImpar = -1;
    *cantIguales = 0;
    int digito;

    while (n > 0) {
        digito = n % 10;
        if (digito % 2 != 0) {
            if (*menorImpar == -1 || digito < *menorImpar)
                *menorImpar = digito;
        }
        if (digito == ultimoDigito)
            (*cantIguales)++;
        n /= 10;
    }
}

int main() {
    int n, menor, cant;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    
    analizar(n, &menor, &cant);
    
    printf("Menor impar: %d\n", menor);
    printf("Cantidad iguales al último dígito: %d\n", cant);
return 0;
}