// // // // // // // // // // // // // // // // // // // // // // // //
// PARCIAL DE LA CLASE (PARTE 1)

// // // // // // // // // // // // // // // // // // // // // // // //
// EJERCICIO 1
/*
void busqueda_impar(int numero, int *mayor_impar, int *suma_impares){
    *mayor_impar = -1;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor_impar){
                *mayor_impar = digito;
            }
            *suma_impares += digito;
        }
        numero /= 10;
    }
}

*/
// // // // // // // // // // // // // // // // // // // // // // // // 
//EJERCICIO 2
/*
#include <stdbool.h>
#define MAX 500
typedef int tvector[MAX];

void busqueda_numero(tvector vector, int ml, int *primer_neg, bool *par_mayor){
    *primer_neg = -1;
    *par_mayor = false;
    int i;

    while(i < ml && !(*par_mayor && *primer_neg != -1)){
        if(vector[i] < 0 && *primer_neg == -1){
            *primer_neg = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }

}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
#include <stdbool.h>
#define CANTCOLS 25
#define CANTFILAS 15
typedef char tmatriz[CANTFILAS][CANTCOLS];

void busqueda_clave_fila (tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){
    
    bool encontrado;
    *cant_filas = 0;
    int i, j;

    for(i = 0; i < mlf; i++){
        j = 0;
        encontrado = false;
        while(j < mlc && !encontrado){
            if(matriz[i][j] == clave){
                *cant_filas++;
                encontrado = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 1er PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void busqueda_impares(int numero, int *menor_dig_impar, int *cant_dig_iguales){
    
    *menor_dig_impar = -1;
    *cant_dig_iguales = 0;
    int digito;
    int ultimo_dig = numero % 10;


    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0 && (digito < *menor_dig_impar || *menor_dig_impar == -1)){
            *menor_dig_impar = digito;
        }
        if(digito == ultimo_dig){
            (*cant_dig_iguales)++;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void promedio_vector(tvector vector, int ml, float *promedio, int *indice_mayor){
    *promedio = 0.0;
    *indice_mayor = 0;
    int i, suma = 0, cantidad = 0;

    while(i < ml){
        
        if(vector[i] > 0)
            suma += vector[i];
            cantidad++;
        if(vector[i] > *indice_mayor){
            *indice_mayor = i;
        }
        i++;
    }

    if(cantidad > 0)
        *promedio = suma / cantidad;
    else{
        *promedio;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void filas_elem_ordenados(tmatriz matriz, int mlf, int mlc, int *cant_filas){

    *cant_filas = 0;
    bool ordenado;
    int i, j;

    for(i = 0; i < mlf; i++){
        
        j = 0;
        ordenado = false;
        
        while(j < mlc && ordenado){
            if(matriz[i][j] <= matriz[i][j - 1]){
                (*cant_filas)++;
                ordenada = true;
            }
            j++;        
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 2do PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1

/*
void ejercicio_1 (int numero, int *primer_impar, int *cantidad_digitos){
    
    *primer_digito = -1;
    *cantidad_digitos = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        (*cant_digitos)++;

        if(digito % 2 != 0){
            *primer_digito = digito;    
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *indice_ult_neg, bool *elem_mayor){

    *indice_ult_neg = -1;
    *elem_mayor = false;
    int i = 0;

    while(i < ml){
        if(vector[i] < 0){
            *indice_ult_neg = i;
        }
        if(vector[i] > 200){
            *elem_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, bool *fila_todos_negativos, int *cant_filas){

    *fila_todos_negativos = false;
    *cant_filas = 0;
    bool hay_cero, todo_neg;
    int i, j;

    for(i = 0; i < mlf; i++){
        
        j = 0;
        todo_neg = true;
        hay_cero = false;

        while(j < mlc){
            if(matriz[i][j] >= 0){
                todo_neg = false;
            }
            if(matriz[i][j] == 0){
                hay_cero = true;
            }
            j++;
        }
        if(todo_neg){
            *fila_todos_negativos = true;
        }
        if(hay_cero){
            (*cant_filas)++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 3er PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1 
/*
void ejercicio_1(int numero, int *cant_multiplos_3, int *suma_multiplos_3){

    *cant_multiplos = 0;
    *suma_multiplos = 0;
    int digito;

    while(numero > 0){
        
        digito = digito % 10;
        
        if(digito % 3 == 0){
            (*cant_multiplos_3)++;
            *suma_multiplos_3 += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2(tvector vector, int ml, int *suma_negativos, int *cant_pares){
    
    *suma_negativos = 0;
    *cant_pares = 0;
    int i = 0;

    while(i < ml){
        if(vector[i] < 0){
            *suma_negativos += vector[i];
        }
        if(vector[i] % 2 == 0){
            (*cant_pares)++;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3(tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){
    *cant_filas = 0;
    bool encontrado;
    int i,j;

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
            *cant_filas++;    
        }
    
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 4to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1 --> se necesita dos while claude lcdm
/*
void ejercicio1 (int numero, bool *digitos_distintos, int *produc_digitos){

    *digitos_distintos = false;
    bool no_hay_cero = false;
    *produc_digitos = 1;
    int digito, temp = numero;

    while(numero > 0){
        digito = numero % 10;

        if(temp > 0){
            if(temp % 10 == digito){
                *digitos_distintos = true;
            }
        }
        if(digito != 0){
            no_hay_cero = true;
            *produc_digito *= digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2(tvector vector, int ml, bool *or_ascendente, int *elem_repetidos){

    bool ordenado = true;
    *or_ascendente = false;
    *elem_repetidos = 0;
    int i = 0;

    while(i < ml){
        
        if(vector[i] < vector[i - 1]){   // Si algún elemento es menor al anterior, la bandera auxiliar se pone en false
            ordenado = false;
        }
        if(vector[i] == vector[i - 1]){  // Si el elemento actual es igual al anterior, es un repetido consecutivo
            (*elem_repetidos)++;
        }
        i++;
    }
    if(ordenado){    // Al final del recorrido, si ningún elemento rompió el orden, se asigna true
        *or_ascendente = true;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio3(tmatriz matriz, int mlf, int mlc, int umbral, int *cant_filas){

    *cant_filas = 0;;
    int i, j;
    bool todo_mayor;

    for(i = 0; i < mlf; i++){
        
        j = 0;
        todo_mayor = false;
        
        while(j < mlc && todo_mayor){
            if(matriz[i][j] <= umbral){
                todo_mayor = true;
            }
            j++;
        }
        if(todo_mayor){
            (*cant_filas)++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 5to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio1(int numero, bool *num_palindromo, int *suma_digitos){
    *suma_digitos = 0;
    *num_palindromo = false;
    int digito, invertido = 0, original = numero;

    while(numero > 0){
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        if(invertido == original){
            *num_palindromo = true;
        }
        *suma_digitos += digito;
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2(tvector vector, int ml, int *primer_mayor, bool *todos_positivos){
    *primer_mayor = -1;
    *todos_positivos = false;
    int i = 0;

    while(i < ml){
        if(vector[i] > 50 && *primer_mayor == -1){
            *primer_mayor = i;
        }
        if(vector[i] > 0){
            *todos_positivos = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio3(tmatriz matriz, int mlf, int mlc, char 1er_char, char 2do_char, int *cant_filas){

    bool primer_char, segundo_char;
    *cant_filas = 0;
    int i, j;

    for(i = 0, i < mlf; i++){

        j = 0;
        primer_char = false;
        segundo_char = false;

        while(j < mlc && !segundo_char){

            if(matriz[i][j] == 1er_char){
                primer_char = true;
            }
            else if(matriz[i][j] == 2do_char){
                segundo_char = true;
            }
            j++;
        }
        if(primer_char){
            (*cant_filas)++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 6to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio1(int numero, int *suma_posi_impar, int *cant_dig_posi_par){

    *suma_posi_impar = 0;
    *cant_dig_posi_par = 0;
    int posicion = 1;
    int digito;

    while(numero > 0){
        
        digito = numero % 10;
        
        if(posicion % 2 != 0){ //empieza en la posi 1 y cada vez que sea impar suma los digitos;
            *suma_posi_impar += digito;
        }
        else{
            (*cant_dig_posi_par)++;
        }
        numero /= 10;
        posicion++; //aumenta posiciones a medida que lee la cadena de numeros
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2(tvector vector, int ml, int *cant_elem_distintos, bool *igual_cero){
    *cant_elem_distintos = 0;
    *igual_cero = false;
    int i = 0;

    while(i < ml){
        
        if(vector[0] != vector[i]){
            (*cant_elem_distintos)++;
        }
        if(vector[i] == 0){
            *igual_cero = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio3 (tmatriz matriz, int mlf, int mlc, bool *diago_positivos){
    
    int i = 0, cuadrada;
    *diago_positivos = true;

    if(mlf < mlc){
        cuadrada = mlf;
    }
    else{
        cuadrada = mlc;
    }
    while(i < cuadrada){
        if(matriz[i][i] <= 0){
            *diago_positivo = false;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 7mo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *cant_pares_conse, bool *mismo_dig){
    *mismo_dig = true;
    *cant_pares_conse = 0;
    int digito, suma_digitos_pares = 0;
    int posicion = 1;

    while(numero > 0){
        
        digito = numero % 10;

        if(digito % 2 == 0){
            if(suma_digitos_pares += digitos == 10){
                (*cant_pares_conse)++;
            }
        }
        if()

    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2(tvector vector, int ml, bool *es_capicua, int *suma_indice_par){

    *es_capicua = true;
    *suma_indice_par = 0;
    int i = 0;

    while(i < ml){
        if(vector[i] != vector[ml - 1 - i]){
            *es_capicua = false;
        }
        if(i % 2 == 0){
            *suma_indice_par += vector[i];
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_columnas){

    *cant_columnas = 0;
    bool se_encontro;
    int i, j;

    // si tengo que buscar en columnas leo alreves la matriz de j a i (columnas a filas)

    for(j = 0; j < mlc; j++){
        i = 0;
        se_encontro = false

        while(i < mlf && !se_encontro){
            if(matriz[i][j] == clave){
                (*cant_columnas)++;
                se_encontro = true;
            }
            i++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 8vo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio1 (int numero, int *cant_no_cero, int *menor_dig){

    *cant_no_cero = 0;
    *menor_dig = -1;
    int digito;

    while(numero > 0){

        digito = numero % 10;

        if(digito != 0){
            (*cant_no_cero)++;
            
            if(*menor_dig == -1 || digito < *menor_dig){
                *menor_dig = digito;
            }
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2(tvector vector, int ml, int *indice_negativo, bool *par_mayor){
    
    *par_mayor = false;
    *indice_negativo = -1;
    int i = 0;

    while(i < ml && !(*par_mayor && *indice_negativo != -1)){
        if(vector[i] < 0 && *indice_negativo == -1){
            *indice_negativo = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio3(tmatriz matriz, int mlf, int mlc, int entero, int *indice_primera_fila){

    *indice_primera_fila = -1;
    int i, j;

    for(i = 0; i < mlf && *indice_primera_fila == -1; i++){
        j = 0;
        while(j < mlc && *indice_primera_fila == -1){
            if(matriz[i][j] == entero){
                *indice_primera_fila = i;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 9no PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio1(int numero, int *mayor_impar, int *suma_impar){

    *mayor_impar = -1;
    *suma_impar = 0;
    int digito;

    while(numero > 0){ 
        digito = numero % 10;
        if(digito % 2 == 0){
            if(digito > *mayor_impar){
                *mayor_impar = digito;
            }
            *suma_impar += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio2 (tvector vector, int ml, int *cant_mult5, int *mayor_nega){

    *cant_mult5 = 0;
    *mayor_nega = 0;
    int i = 0;

    while(i < ml){
        if(vector[i] % 5 == 0){
            (*cant_mult5)++;
        }
        if(vector[i] < 0 && vector[i] > *menor_nega){
            *mayor_nega = vector[i];
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, int *indice_suma_fila_mayor, int *suma_total){
    
    *indice_suma_fila_mayor = 0;
    *suma_total = 0;
    int i,j;
    int suma_fila = 0, suma_fila_mayor = 0;

    for(i = 0; i < mlf; i++){
        j = 0;

        while(j < mlc){
            sumafila += matriz[i][j]; // acumula la suma de la fila actual
        }
        *suma_total += sumafila; // acumula suma total (sin recorrer de nuevo)
        
        if(sumafila > suma_fila_mayor){
            suma_fila_mayor = sumafila;
            *indice_suma_fila = i; // actualizado indice de la fila con mayor suma
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 10mo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *mayor_par, int *cant_pares){

    *mayor_par = -1;
    *cant_pares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 == 0){
            if(digito > *mayor_par){
                *mayor_par = digito;
            }
            (*cant_pares)++;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *indice_mayorsig, int *cant_valor_max){

    *indice_mayorsig = -1;
    *cant_valor_max = 0;
    int i = 1, num_mayor = 0;

    while(i < ml){
        if(i < ml -1 && *indice_mayorsig == -1 && vector[i] > vector[i + 1]){
            *indice_mayorsig = i;
        }
        if(vector[i] > num_mayor){
            num_mayor = vector[i];
            *cant_valor_max = 1;
        }
        else if(vector[i] == num_mayor){
            (*cant_valor_max)++;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_ocurrencias, int *indice_1erfila_aparicion){

    *cant_ocurrencias = 0;
    *indice_1erfila_aparicion = -1;
    int i, j;

    for(i = 0; i < mlf; i++){

        j = 0;

        while(j < mlc){

            if(matriz[i][j] == clave){
                (*cant_ocurrencias)++;

                if(*indice_1erfila_aparicion == -1){
                    *indice_1erfila_aparicion = i;
                    
                }
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// PARCIAL DE LA CLASE (PARTE 2)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *mayor_impar, int *suma_impares){

    *mayor_impar = -1;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            else if(digito > *mayor_impar){
                *mayor_impar = digito;
            }
            *suma_impares += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *1er_negativo, bool *par_mayor){

    *1er_negativo = -1;
    *par_mayor = false;
    int i;

    while(i < ml && !(*par_mayor && *1er_negativo == -1)){
        
        if(vector[i] < 0 && *1er_negativo == -1){
            *1er_negativo = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){

    *cant_filas = 0;
    bool se_encontro;
    int i, j;

    for(i = 0; i < mlf; i++){
        j = 0;
        se_encontro = false;

        while(j < mlc && !se_encontro){
            if(matriz[i][j] == clave){
                (*cant_filas)++;
                se_encontro = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 1er PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *menor_impar, int *cant_ultimo){

    *menor_impar = -1;
    *cant_ultimo = 0;
    int digito;
    int ultimo_digito = numero % 10;

    whil(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0 && digito < *menor_impar || *menor_digito == -1){
            *menor_impar = digito;
        }
        if(digito == ultimo_digito){
            (*cant_ultimo)++;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, float *pro_mayores, int *indice_mayor){

    *indice_mayor = 0;
    *pro_mayores = 0.0;
    float suma = 0.0;
    int cantidad = 0;
    int i;

    while(i < ml){
        if(vector[i] > 0){
            suma += vector[i];
            cantidad++;
        }
        if(vector[i] > *indice_mayor){
            *indice_mayor = i;
        }
        i++;
    }
    if(cantidad > 0){
        *pro_mayores = suma / cantidad;
    }
    else{
        *pro_mayores;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, int *cant_filas_or_asc){

    *cant_filas_or_asc = 0;
    int i, j;
    bool se_encontro;

    for(i = 0; i < mlf; i++){

        j = 0;
        se_encontro = false;

        while(j < mlc && !se_encontro){
            
            if(matriz[i][j] <= matriz[i][j - 1]){
                (*cant_filas_or_asc)++;
                se_encontro = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 2do PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *primer_impar, int *cant_digitos){

    *primer_impar = -1;
    *cant_digitos = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        (*cant_digitos)++;

        if(digito % 2 != 0 && *primer_impar == -1){
            *primer_impar = digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *ultimo_neg, bool *mayor_200){

    *ultimo_neg = -1;
    *mayor_200 = false;
    int i;

    while(i < ml){
        if(vector[i] < 0 && *ultimo_neg == -1){
            *ultimo_neg = i;
        }
        if(vector[i] > 200){
            *mayor_200 = true;
        }
        i+;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlfc, bool *fila_neg, int *cant_fcero){

    *fila_neg = false;
    *cant_cero = 0;
    bool se_encontro;
    int i, j;

    for(i = 0; i < mlf; i++){

        j = 0;

        while(j < mlc){
            if(matriz[i][j] < 0){
                *fila_neg = true;
            }
            if(matriz[i][j] == 0){
                *cant_fcero;
            }
            j++;
        }
    }
}

*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 3ro PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *cant_multi3, int *suma_multi3){

    *cant_multi3 = 0;
    *suma_multi3 = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 3 == 0){
            (*cant_multi3)++;
            *suma_multi3 += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *suma_nega, int *cant_pares){

    *suma_nega = 0;
    *cant_pares = 0;
    int i;

    while(i < ml){
    
        if(vector[i] < 0){
            *suma_nega += vector[i];
        }
        else if(vector[i] % 2 == 0){
            (*cant_pares)++;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){

    *cant_filas = 0;
    bool se_encontro;
    int i, j;

    for(i = 0; i < mlf; i++){

        j = 0;
        se_encontro = false;

        while(j < mlc && !se_encontro){

            if(matriz[i][j] == clave){
                (*cant_filas)++;
                se_encontro = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 4to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, bool *todos_distintos, int *pro_distintos_0){

    *todos_distintos = false;
    *pro_distintos_0;
    int digito, distinto = numero % 10;

    while(numero > 0){
    
        digito = numero % 10;
        if(digito == distinto){
            *todos_distintos = true;
        }
        else if(digito != 0){
            *pro_distintos_0 *= digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, bool *ord_asc, int *cant_repetidos){

    *ord_asc = false;
    *cant_repetidos = 0;
    int i;

    while(i < ml){
    
        if(vector[i] <= vector[i -1]){
            *ord_asc = true;
        } 
        if(vector[i] == vector[i - 1]){    
            (*cant_repetidos)++;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, int umbral, int *cant_filas){

    *cant_filas = 0;
    umbral = 10;
    int i, j;

    for(i = 0; i < mlf; i++){
    
        j = 0;
    
        while(j < mlc){

            if(matriz[i][j] > umbral){
                (*cant_filas)++;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 5to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, bool *capicua, int *suma_digitos){

    *capicua = false;
    *suma_digitos = 0;
    int digito, invertido;

    while(numero > 0){
        
        digito = numero % 10;
        invertido = invertido * 10 + digito;

        if(digito == invertido){
            *capicua = true;
        }
        *suma_digitos += digito;    
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *mayor_50, bool *positvos){

    *mayor_50 = -1;
    *positivos = false;
    int i;

    while(i < ml){

        if(vecotr[i] > *mayor_50 && *mayor_50 == -1){
            *mayor_50 = i;
        }
        else if(vector[i] > 0){
            *positivos = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char 1er_char, char 2do_char, *cant_filas){

    *cant_filas = 0;
    bool hay_1er, hay_2do;
    int i, j;

    for(i = 0; i < mlf; i++;){
    
        j = 0;
        
        while(j < mlc){
            if(matriz[i][j] == 1er_char){

                if(matriz[i][j] != 2do_char){
                    (*cant_filas)++;
                }
                else{
                    *cant_filas;
                }
            else if(matriz[i][j] == 2do_char ){
                *cant_filas;
                }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 6to PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *suma_posi_impar, int *cant_dig_pos_par){

    *suma_posi_impar = 0;
    *cant_dig_pos_par = 0;
    int posicion = 1
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(posicion % 2 != 0){
            *suma_posi_impar += digito;
        }
        else{
            (*cant_dig_pos_par)++;
        }
        numero /= 10;
        posicicon++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *cant_dis_1erpos, bool *igual_cero){

    *cant_dis_1erpos = 0;
    *igual_cero = false;
    int i = 0;

    while(i < ml){
        if(vector[0] != vector[i]){
            *cant_dis_1erpos = 0;
        }
        else if(vector[i] == 0){
            *igual_cero = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, bool *diagonal_positivos){

    int i = 0, j = 0;

    while(i < mlf && j < mlc){
        if(matriz[i][j] > 0){
            *diagonal_positivos = true;
        }
        else{
            *diagonal_positivos = false;
        }
        i++;
        j++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 7mo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
* NO HACER NO TIENE SENTIDO DIFICULTAD ABSURDA
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, bool *es_capicua, int *suma_pos_par){

    *es_capicua = false;
    *suma_pos_par = 0;
    int i = 0, invertido;

    while(i < ml){
        invertido = invertido * 10 + (vector[i] % 10)
        if(vector[i] == invertido){
            *es_capicua = true;
        }
        else if(i % 2 == 0){
            *suma_pos_par += vector[i];
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_columnas){

    *cant_columnas = 0;
    bool se_encontro;
    int j, i;

    for(j = 0; j < mlc; j++){
        
        i = 0;
        se_encontro = false;
        
        while(i < mlf && !se_encontro){
            
            if(matriz[i][j] == clave){
                (*cant_columnas)++;
                se_encontro = true;
            }
            i++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 8vo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *cant_dig_dist0, int *menor_dig_dist0 ){

    *cant_dig_dist0 = 0;
    *menor_dig_dist0 = -1;
    int digito;

    while(numero > 0){
        
        digito = numero % 10;
        
        if(digito != 0){
            (*cant_dig_dist0)++;
            
            if(digito < *menor_dig_dis0 && *menor_dig_dis0 == -1){
                *menor_dig_dist0 = digito;
            }
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *indice_1erneg, bool *par_mayor){

    *indice_1erneg = -1;
    *par_mayor = false;
    int i = 0;

    while(i < ml && !(*par_mayor && *indice_1erneg != -1)){
        
        if(vector[i] < 0 && *indice_1erneg == -1){
            *indice_1erneg = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, int entero, *cant_fila){

    *cant_fila = 0;
    bool se_encontro;
    int i, j;

    for(i = 0; i < mlf; i++){

        j = 0;
        se_encontro = false;

        while(j < mlc && !se_encontro){
        
            if(matriz[i][j] == entero){
                (*cant_fila)++;
            }
            else{
                *cant_fila = -1;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 9no PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *mayor_impar, int *suma_impares){
    *mayor_impar = -1;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digio > *mayor_impar && *mayor_impar == -1){
                *mayor_impar = digito;
            }
            *suma_imapres += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *cant_mult5, int *mayor_neg){

    *cant_mult5 = 0;
    *mayor_neg = 0;
    int i;

    while(i < ml){
        if(vector[i] % 5 == 0){
            (*cant_mult5)++;
        }
        else if(vector[i] < 0 && vector[i] > *mayor_neg){
            *mayor_neg = vector[i];
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, int *indice_suma_mayor, int *suma_total){

    *indice_suma_mayor = 0;
    *suma_total = 0;
    int i, j;
    int suma_fila = 0;

    for(i = 0; i < mlf; i++){
        j = 0;
        while(j < mlc){
            suma_fila += matriz[i][j];
            if(suma_fila > *indice_suma_mayor){
                *indice_suma_mayor = suma_fila;
            }
            *suma_total += matriz[i][j];
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// 10mo PARCIAL DE CLAUDE (MODELO)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *mayor_par, int *cant_pares){

    *mayor_par = -1;
    *cant_pares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 == 0){
            if(digito > *mayor_par && *mayor_par == -1){
                *mayor_par = digito;
            }
            (*cant_pares)++;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *indice_mayor, int *cant_vmax){

    *indice_mayor = -1;
    *cant_vmax = 0;
    int i, valor_max = 0;

    while(i < ml){
        if(i < ml -1 &&vector[i] > vector[i + 1] && *indice_mayor == -1){
            *indice_mayor = i;
        }
        else if(vector[i] > valor_max){
            valor_max = vector[i];
            *cant_vmax = 1;
        }
        else if(vector[i] == valor_vmax){
            (*cant_vmax)++;
        }
        i++;
    }   
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_1 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_chars, int *indice_fila_aparece){

    *cant_chars = 0;
    *indice_fila_aparece = -1;
    int i, j;

    for(i = 0; i < mlf; i ++){
        j = 0;
        while(j < mlc){
            if(matriz[i][j] == clave){
                (*cant_chars)++;
            }
            if(*indice_fila_aparece == -1){
                *indice_fila_aparece = i;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// PARCIAL DE LA CLASE (PARTE 3)

// EJERCICIO 1
/*
void ejercicio_1 (int numero, int *mayor_impar, int *suma_impar){

    *mayor_impar = -1;
    *suma_impar = 0;
    int digito;

    while (numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor_impar && *mayor_impar = -1){
                *mayor_impar = digito;
            }
            *suma_impar += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void ejercicio_2 (tvector vector, int ml, int *primer_neg, bool *par_mayor){

    *primer_neg = -1;
    *par_mayor = false;
    int i;

    while(i < ml && !(*par_mayor && *primer_neg != -1)){
        if(vector[i] < 0 && *primer_neg == -1){
            *primer_neg = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void ejercicio_3 (tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){

    *cant_filas = 0;
    bool se_encontro;
    int i,j;

    for(i = 0; i < mlf ;i++){

        j = 0;
        se_encontro = false;

        while(j < mlc && !se_encontro){
            if(matriz[i][j] == clave){
                (*cant_filas)++;
                se_encontro = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// PARCIAL DE LA CLASE (PARTE 4)

// EJERCICIO 1
/*
void calculo_impares (int numero, int *mayor_impar, int *suma_impares){

    *mayor_impar = -1;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor_impar){
                *mayor_imapar = digito;
            }
            *suma_impares += digito;
        }
        numero /= 10;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 2
/*
void analizando_vector (tvector vector, int *primer_neg, bool *par_mayor){

    *primer_neg = -1;
    *par_mayor = false;
    int i = 0;
    while(i < ml && !(*par_mayor && *primer_neg != -1)){
        if(vector[i] > 0 && *primer_neg == -1){
            *primer_neg = i;
        }
        else if(vector[i] % 2 == 0 && vector[i] > 100){
            *par_mayor = true;
        }
        i++;
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 
// EJERCICIO 3
/*
void buscar_char (tmatriz matriz, int mlf, int mlc, char clave, int *cant_filas){

    *cant_filas = 0;
    bool se_encontro;
    int i,j;

    for(i = 0; i < mlf; i++){
        j = 0;
        se_encontro = false;
        while(j < mlc && !se_encontro){
            if(matriz[i][j] == clave){
                (*cant_filas)++;
                se_encontro = true;
            }
            j++;
        }
    }
}
*/
// // // // // // // // // // // // // // // // // // // // // // // // 