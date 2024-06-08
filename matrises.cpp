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


if(columnas != filas2){
    cout << "No se puede multiplicar las matrices" << endl;
    while (columnas != filas2){
        cout << "Ingrese el numero de filas de la matriz: ";
        cin >> filas;
        cout << "Ingrese el numero de columnas de la matriz: ";
        cin >> columnas;
        cout << "Ingrese el numero de filas de la segunda matriz: ";
        cin >> filas2;
        cout << "Ingrese el numero de columnas de la segunda matriz: ";
        cin >> columnas2;
    }
}
    int matris[filas][columnas];
    int matris2[filas2][columnas2];

for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout << "Ingrese de la primera matris el valor para la posicion [" << i << "][" << j << "]: ";
        cin >> matris[i][j];
        cout << "Ingrese de la segunda matris el valor para la posicion [" << i << "][" << j << "]: ";
        cin >> matris2[i][j];
    }
}

    int multiplicacion[filas][columnas2];

for(int h=0; h<3; h++){
    for(int k=0; k<3; k++){
        for(int i=0; i<3; i++){
            multiplicacion[h][k] += matris[h][i] * matris2[i][k];
        }
    }
}

for(int h=0; h<3; h++){
    for(int k=0; k<3; k++){
        cout << multiplicacion[h][k] << " ";
    }
    cout << endl;
}



    return 0;
}