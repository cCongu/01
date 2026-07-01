#include <stdio.h>
#include <stdbool.h>
#define MAX 500
typedef int tvector[MAX];

void ejercicio2 (tvector vector, int ML, int *posi_nega, bool *par_mayor){
    *posi_nega = -1;
    *par_mayor = false;
    int i = 0;

    while(i < ML && !(*posi_nega != -1 && *par_mayor)){
        if(vector[i] < 0 && *posi_nega == -1){
            *posi_nega = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}