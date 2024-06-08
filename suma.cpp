#include <iostream>
using namespace std;

int main(){

    int filas, columnas, filas2, columnas2;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;
    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;


if(filas != filas2 || columnas != columnas2){
    cout << "No se puede sumar las matrices" << endl;
    while (filas != filas2 || columnas != columnas2){
        cout << "Ingrese el numero de filas de la matriz: ";
        cin >> filas;
        cout << "Ingrese el numero de columnas de la matriz: ";
        cin >> columnas;
        cout << "Ingrese el numero de filas de la segunda matriz: ";
        cin >> filas2;
        cout << "Ingrese el numero de columnas de la segunda matriz: ";
        cin >> columnas2;
}
    int matris[filas][columnas];
    int matris2[filas2][columnas2];

for(int i= 0; i < filas; i++){
    for(int j= 0; j < columnas; j++){
        cout << "Ingrese de la primera matris el valor para la posicion [" << i << "][" << j << "]: ";
        cin >> matris[i][j];
        cout << "Ingrese de la segunda matris el valor para la posicion [" << i << "][" << j << "]: ";
        cin >> matris2[i][j];
    }
}
int suma[filas][columnas];
for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
        suma[i][j] = matris[i][j] + matris2[i][j];
    }
}

for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
        cout << suma[i][j]  << " ";
    }
    cout << endl;
}



return 0;
}
