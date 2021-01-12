#include <iostream>
#include <array>
#include <random>
#include <time.h>

using namespace std;

const int LONGITUD_DEL_ARRAY = 1000;
const int NUMERO_MAXIMO = 1000;

typedef int tarray[LONGITUD_DEL_ARRAY];

void ordenar(tarray &arr1, int longitud);

int main() {
    srand(time(NULL));    
    tarray arr1;

    int longitud = sizeof(arr1) / sizeof(*arr1);
    for (int i = 0; i < longitud; i++) {
        arr1[i] = rand() % NUMERO_MAXIMO;
    }
    for (int d = 0; d < longitud; d++) {
        cout << arr1[d] << ", ";

    }
    cout << endl;
    ordenar(arr1, longitud);
}

void ordenar(tarray& arr1, int longitud) {
    int contador1, contador2 = 0;
    tarray arr2;
    for (int a = 0; a < longitud; a++) {  //Copiamos el array
        arr2[a] = arr1[a];
    }

    for (int i = 0; i > -1; i++) { 
        i %= longitud;
        //1 - Comprobamos si ya está odenado
        contador1 = 0;
        for (int b = 0; b < longitud - 1; b ++) { 
            if (arr1[b] <= arr1[b + 1]) {
                contador1++;
            }
        }
        if (contador1 == longitud - 1) {
            cout << endl;
            for (int d = 0; d < longitud; d++) {
                cout << arr1[d] << ", ";
            }
            break;
        }
        //2 - Imprimimos el array
        // opcional
        cout << endl;
        for (int d = 0; d < longitud; d++) {
            cout << arr1[d] << ", ";
        }
        cout << endl;

        //3 - Ordenamos un numero
        for (int j = 0; j < longitud; j++) {
            if (arr1[i] < arr2[j]) {
                arr1[i] = arr2[j];
                arr1[j] = arr2[i];
                for (int a = 0; a < longitud; a++) {  //Copiamos el array
                    arr2[a] = arr1[a];
                }
            }
        }
    }
}

//Si se cambia el orden a 3, 2, 1