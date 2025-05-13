#include<iostream>
using namespace std;

/*Ejercicio 2: Calculadora con Switch
Enunciado:
Diseña un programa que pida dos números y una operación aritmética (+, -, *, /). Usa switch para realizar la operación correspondiente y mostrar el resultado. Si la operación no es válida, mostrar un mensaje de error.

Temas evaluados: switch, operaciones básicas, validación de entrada.*/

int main()
{
    int n1 = 0;
    int n2 = 0;

    char op; // Cambiado de string a char

    cout << "Ingresa tu primer número: ";
    cin >> n1;
    cout << "Ingresa tu segundo número: ";
    cin >> n2; 

    cout << "Selecciona la operación que harás (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << "La suma de " << n1 << " + " << n2 << " es: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "La resta de " << n1 << " - " << n2 << " es: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "La multiplicación de " << n1 << " * " << n2 << " es: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0)
                cout << "La división de " << n1 << " / " << n2 << " es: " << n1 / n2 << endl;
            else
                cout << "Error: División por cero no permitida." << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }

    return 0;
}

