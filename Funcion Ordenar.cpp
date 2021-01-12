#include <iostream>
#include <array>
#include <random>
#include <time.h>

using namespace std;

typedef int tarray[13];

void ordenar(tarray &arr1, int longitud);

int main()
{
    srand(time(NULL));
    int a, b, c, d, e, f, g, h, i, j, k, l, m;
    
    tarray arr1;
    for (int i = 0; i < 13; i++) {
        arr1[i] = rand() % 100;
    }
    int longitud = sizeof(arr1) / sizeof(*arr1);
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
    for (int d = 0; d < longitud; d++) {
        cout << arr1[d] << ", ";
    }

    for (int i = 0; i > -1; i++) { 
        i %= longitud;
        for (int j = 0; j < longitud; j++) {
            if (arr1[i] < arr2[j]) {
                arr1[i] = arr2[j];
                arr1[j] = arr2[i];
                for (int a = 0; a < longitud; a++) {  //Copiamos el array
                    arr2[a] = arr1[a];
                }
            }
        }
        contador1 = 0;
        for (int b = 0; b < longitud - 1; b ++) {
            if (arr1[b] <= arr1[b + 1]) {
                cout << endl << "a" << endl;
                contador1++;
            }
        }
        if (contador1 == longitud - 1) {
            for (int d = 0; d < longitud; d++) {
                cout << arr1[d] << ", ";
            }
            break;
        }
        cout << endl;
        for (int d = 0; d < longitud; d++) {
            cout << arr1[d] << ", ";
        }
        cout << endl;
    }
}