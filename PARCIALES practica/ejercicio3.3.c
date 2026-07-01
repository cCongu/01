/*
#include <stdio.h>
#include <stdbool.h>
#define CANTCOLS 25
#define CANTFILAS 15
typedef char tmatriz[CANTFILAS][CANTCOLS];
*/
/*
int buscar_chars_filas (tmatriz matriz, int mlf, int mlc, char clave){
    int i, j;
    int cant_filas = 0;
    bool encontrado;

    for(i = 0; i < mlf; i++){
        j = 0;
        encontrado = false;
        while(j < mlc && !encontrado){
            if(matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if(encontrado){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/
/*
int buscar_cadena_filas (tmatriz matriz, int mlf, int mlc, char clave){
    int i, j;
    int cant_filas = 0;
    bool encontrado;

    for(i = 0; i < mlf; i++){
        j = 0;
        encontrado = false;
        while(j < mlf && !encontrado){
            if(matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if(encontrado){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/

/*
void buscar_cadena_filas (tmatriz matriz, int mlf, int mlc, char clave){
    int i,j;
    int cant_filas = 0;
    bool encontrado;

    for(i = 0; i < mlf; i++){
        j = 0;
        encontrado = false;
        while(j < mlc && !encontrado){
            if(matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if(encontrado){
            cant_filas++;
        }
    }
    
}
*/
/*
int buscar_cadena_filas(tmatriz matriz, int mlf, int mlc, char clave)
{
    int i, j;
    int cant_filas = 0;
    bool encontrado;

    for (i = 0; i < mlf; i++) {
        j         = 0;
        encontrado = false;
        while (j < mlc && !encontrado) {
            if (matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if (encontrado){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/

// 2 a 3 4 // fila = 1 char 
// a 2 3 4 // fila = 2 char 
// 3 2 1 4 // fila = 2 char
// 8 a 2 1 // fila = 3 char
/*
int busqueda_cadena_filas (tmatriz matriz, int mlf, int mlc, char clave){
    int i, j, cant_filas = 0;
    bool encontrado;

    for(i = 0; i < mlf; i++){
        j = 0;
        encontrado = false;
        while(j < mlc && !encontrado){
            if(matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if(encontrado){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/

//int filasAscendentes(Tmatriz matriz, int mlf, int mlc)
//{
//    int i, j;
//    int cant     = 0;
//    int ordenada;
//
//    for (i = 0; i < mlf; i++) {
//        j        = 1;        /* empezamos en 1: comparamos [j-1] con [j] */
//        ordenada = 1;        /* suponemos que la fila está ordenada       */
//
//        /* corte anticipado: sale en cuanto encuentra un par desordenado */
//        while (j < mlc && ordenada) {
//            if (matriz[i][j] <= matriz[i][j - 1])
//                ordenada = 0;   /* no es estrictamente ascendente */
//            j++;
//        }
//
//        if (ordenada)
//            cant++;
//    }
//
//    return cant;
// }





// EXAMEN 1 DE CLAUDIO 
#include <stdio.h>
#include <stdbool.h>
#define CANTCOLS 20
#define CANTFILAS 10
typedef int tmatriz[CANTFILAS][CANTCOLS];

/*
int filas_ordenadas(tmatriz matriz, int mlf, int mlc){
    int i, j, cant_filas = 0;
    int ordenada;

    for(i = 0; i < mlf; i++){
        j = 1;
        ordenada = 1;
        while(j < mlc && ordenada){
            if(matriz[i][j] <= matriz[i][j - 1]) {
                ordenada = 0;
            }
            j++;
        }
        if (ordenada){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/
/*
int filas_ordenadas(tmatriz matriz, int mlf, int mlc){
    int i,j, cant_filas = 0;
    bool ordenada;

    for(i = 0; i < mlf; i++){
        j = 1,
        ordenada = false;

        while(j < mlc && ordenada){
            if(matriz[i][j] <= matriz[i][j - 1]){
                ordenada = true;
            }
            j++;
        }
        if (ordenada){
            cant_filas++;
        }
    }
}
*/
/*
int filas_ordenadas (tmatriz matriz, int mlf, int mlc){
    int i,j;
    int cant_filas = 0;
    bool ordenado;

    for(i = 0; i < mlf; i++){
        j = 1;
        ordenado = false;
        while(j < mlc && ordenado){
            if(matriz[i][j] <= matriz[i][j - 1]){
                ordenado = true;
            }
            j++;
        }
        if(ordenado){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/
/*
int filas_ordenadas(tmatriz matriz, int mlf, int mlc){
    int i, j;
    int cant_filas = 0;
    bool ordenada;

    for(i = 0; i < mlf; i++){
        j = 1;
        ordenada = false;
        while(j < mlc && ordenada){
            if(matriz[i][j] <= matriz[i][j - 1]){ // se fija que este ordenado ascendente
                ordenada = true;
            }
            j++;
        }
        if(ordenada){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/
/*
int filas_ordenadas (tmatriz matriz, int mlf, int mlc){
    int i, j;
    int cant_filas = 0;
    bool ordenada;

    for(i = 0; i < mlf; i++){
        j = 1;
        ordenada  = false;
        while(j < mlc && ordenada){
            if(matriz[i][j] <= matriz[i][j - 1]){
                ordenada = true;
            }
            j++;
        }
        if(ordenada){
            cant_filas++;
        }
    }
    return cant_filas;
}
*/

#include <stdio.h>

#define CANTCOLS 30
#define CANTFILAS 20

typedef float Tmatriz[CANTFILAS][CANTCOLS];

/*
 * Función: analizarMatriz
 * Parámetros:
 *   - m: la matriz ya cargada
 *   - filas: máximo lógico de filas
 *   - cols: máximo lógico de columnas
 *   - indFilaMayor: parámetro de salida -> índice de fila con mayor suma
 *   - sumaTotal: parámetro de salida -> suma de todos los elementos
 */
void analizarMatriz(Tmatriz m, int filas, int cols, int *indFilaMayor, float *sumaTotal) {
    float sumaFilaMayor = -1e38; // Valor muy pequeño para inicializar
    *sumaTotal = 0.0;
    *indFilaMayor = 0;

    for (int i = 0; i < filas; i++) {
        float sumaFila = 0.0;

        for (int j = 0; j < cols; j++) {
            sumaFila += m[i][j]; // Acumula suma de la fila actual
        }

        *sumaTotal += sumaFila; // Acumula suma total (sin recorrer de nuevo)

        if (sumaFila > sumaFilaMayor) {
            sumaFilaMayor = sumaFila;
            *indFilaMayor = i; // Actualiza índice de la fila con mayor suma
        }
    }
}

// --- Módulo invocante de ejemplo ---
int main() {
    Tmatriz m = {
        {1.0, 2.0, 3.0},
        {10.0, 20.0, 30.0},
        {5.0, 5.0, 5.0}
    };
    int filas = 3, cols = 3;
    int indFilaMayor;
    float sumaTotal;

    analizarMatriz(m, filas, cols, &indFilaMayor, &sumaTotal);

    printf("Índice de fila con mayor suma: %d\n", indFilaMayor);
    printf("Suma total de la matriz: %.2f\n", sumaTotal);

    return 0;
}