#include<iostream>
using namespace std;

/*  Ejercicio 3: Múltiplo de 3 y 5
Enunciado:
Pide un número al usuario e indica si es múltiplo de 3, múltiplo de 5, de ambos o de ninguno.

Temas evaluados: if - else, operadores %, lógica compuesta &&.*/

int main()
{
    int n = 0;
    cout << "Ingrese su numero" << endl;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "su numero: " << n << " es multiplo de 3 y 5" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "su numero: " << n << " es multiplo de 3" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << "su numero: " << n << " es multiplo de 5" << endl;
    }
    else
    {
        cout << "su numero: " << n << " no es multiplo de 3 ni de 5" << endl;
    }
    return 0;
}

/*| Operador | Significado en español     | Ejemplo  | Resultado |
| -------- | -------------------------- | -------- | --------- |
| `<`      | Menor que                  | `5 < 8`  | `true`    |
| `<=`     | Menor o igual que          | `5 <= 5` | `true`    |
| `>`      | Mayor que                  | `7 > 2`  | `true`    |
| `>=`     | Mayor o igual que          | `4 >= 4` | `true`    |
| `==`     | Igual a (ojo: doble igual) | `3 == 3` | `true`    |
| `!=`     | Distinto de (no igual)     | `6 != 4` | `true`    |
*/