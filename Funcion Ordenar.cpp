#include <iostream>
#include <array>
using namespace std;

typedef int tarray[5];

void ordenar(tarray &arr1, int longitud);

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    tarray arr1 = { a,b,c,d,e };
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

    for (int i = 0; i > -1; i++) { 
        i %= longitud;
        cout << "i = " << i;
        contador1 = 0;
        for (int j = 0; j < longitud; j++) {
            cout << "\nj = " << j << endl;
            if (arr1[i] < arr2[j]) {
                arr1[i] = arr2[j];
                arr1[j] = arr2[i];
                cout << "a";
                break;
            }
            for (int c = j; c < longitud; c++) {
                if (arr1[j] < arr1[c]) {
                    contador1++;
                }
                if (contador1 == longitud - j) {
                    contador1 = longitud;
                }
            }
        }
        if (contador1 == longitud) {
            contador2++;
        }
        else {
            contador2 = 0;
        }
        cout << endl;
        for (int d = 0; d < longitud; d++) {
             cout << arr1[d] << ", ";
        }
        cout << endl;

        for (int a = 0; a < longitud; a++) {  //Copiamos el array
            arr2[a] = arr1[a];
        }
        if (contador2 == longitud) {
            break;
        }
    }
}