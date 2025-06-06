/*
Pida al usuario N cantidad de numeros y guardelos en un arreglo, identificar
cual es el menor numero en el arreglo
*/
#include <iostream>
using namespace std;
int main() {
  int array[100];  // Colocamos un limite para que el usuario no se exceda
  int minimo;
  int n;

  cout << "Por favor indice una cantidad de numeros que le gustaria añadir a "
          "su arreglo:"
       << endl;
  cout << "(Maximo 100 y Minimo 1)" << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Numero #" << i + 1 << ":  ";
    cin >> array[i];

    if (array[i] < minimo) {
      minimo = array[i];
    }
  }

  cout << "El elemento minimo en su arreglo es:" << minimo << endl;
  cout << "=============================================" << endl;

  return 0;
}