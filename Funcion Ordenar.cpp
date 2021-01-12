#include <iostream>
#include <array>
using namespace std;

typedef int tarray[5];

void ordenar(tarray& arr1, int longitud);

int main()
{
    tarray arr1 = { 0,0,0,0,0 };
    int longitud = sizeof(arr1) / sizeof(*arr1);
    ordenar(arr1, longitud);
}

void ordenar(tarray& arr1, int longitud) {
    tarray arr2;
    for (int i = 0; i < longitud; i++) { //Copiamos 
        arr2[i] = arr1[i];
    }

}