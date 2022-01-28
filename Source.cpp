#include <iostream>
using namespace std;
int main() {

    int notas[5], cantNotas, suma, nota = -1;

    cantNotas = suma = 0;

    for (int i = 0; i < 5 && (nota < 0 || nota > 100); i++) {

        /*do {

          cout << "Nota No. " << i + 1 << ": ";

          cin >> notas[i];

        } while (notas[i] < 0 || notas[i] > 100);

        suma += notas[i];

        if (!notas[i])

          break;

        cantNotas++;*/

        cout << "Nota No. " << i + 1 << ": ";

        cin >> nota;

        if (nota >= 0 && nota <= 100)

            suma += notas[i] = nota;



        //suma += notas[i] = nota;

          //if (nota == 0)

        if (!nota)

            break;

        cantNotas++;

    }

    double promedio = suma / cantNotas;

    cout << "Promedio: " << promedio << endl;

}