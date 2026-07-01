#include <stdio.h>
#include <stdbool.h>
#define MAX 500
typedef int tvector[MAX];

void ejercicio2 (tvector vector, int ml, int *posi_negativo, bool *par_mayor){
    *posi_negativo = -1;
    *par_mayor = false;
    int i = 0;

    while (i < ml && !(*par_mayor && *posi_negativo != -1)){
        if(vector[i] < 0 && *posi_negativo == -1){
            *posi_negativo = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}