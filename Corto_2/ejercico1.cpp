#include<iostream>
using namespace std;

/*Ejercicio 1: Clasificación de Edad
Enunciado:
Crea un programa que pida al usuario su edad y clasifique según el siguiente criterio:

Menor de edad (edad < 18)

Adulto (entre 18 y 64)

Adulto mayor (65 o más)*/

int main()
{
    int n = 0;

    cout << "ingrese la edad" << endl;
    cin >> n;

    if(n < 0 && n > 120)
    {
        cout << "Su edad no es irrealista " << endl; 
    }
    else if (n <= 18)
    {
        cout << "Su edad : " << n << " es la de un menor de edad" << endl;
    }
     else if (n > 18 && n <= 64)
    {
        cout << "Su edad: " << n << " es la de un adulto" << endl;
    }
     else if (n > 65)
    {
        cout << "Su edad: " << n << " es la de un adulto mayor" << endl;
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