#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "matrix.hpp"





Matrix::Matrix() {}
Matrix::Matrix(int rows, int cols){
    this->rows = rows;
    this->cols = cols;
}

int Matrix:: getCols(){
    return cols;
}

int Matrix:: getRows(){
    return rows;
}







int matrix[rows][cols];
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios

    // Generar números aleatorios y asignarlos a cada elemento de la matriz
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
        }

    }
    srand(time(NULL));

    // Imprimir la matriz por pantalla
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }