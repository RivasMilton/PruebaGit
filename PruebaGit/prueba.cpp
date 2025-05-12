#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;  // Tamaño de la matriz (n x n)
    vector<vector<int>> matriz(n, vector<int>(n, 0));

    int valor = 1;
    int izquierda = 0, derecha = n - 1;
    int arriba = 0, abajo = n - 1;

    for (; izquierda <= derecha && arriba <= abajo; ) {
        for (int i = izquierda; i <= derecha; i++)  // izquierda → derecha
            matriz[arriba][i] = valor++;
        arriba++;

        for (int i = arriba; i <= abajo; i++)        // arriba ↓ abajo
            matriz[i][derecha] = valor++;
        derecha--;

        if (arriba <= abajo) {
            for (int i = derecha; i >= izquierda; i--)  // derecha ← izquierda
                matriz[abajo][i] = valor++;
            abajo--;
        }

        if (izquierda <= derecha) {
            for (int i = abajo; i >= arriba; i--)       // abajo ↑ arriba
                matriz[i][izquierda] = valor++;
            izquierda++;
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
