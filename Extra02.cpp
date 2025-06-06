/*
Crea un programa que simule una pequeña tienda donde
el usuario pueda comprar productos de una lista, ver su carrito o salir
*/
#include <conio.h>

#include <iostream>
using namespace std;
int main() {
  int options;
  char ¨a¨,´b´,´c´,¨d¨,¨e¨;

  cout << "Bienvenido a nuestra pequeña tienda la bendicion de dios:" << endl;
  cout << "A continuacion se le muestra una lista de lo que puede realizar:"
       << endl;
  cout << "a.Ver productos disponibles" << endl;
  cout << "b.Agregar producto al carrito" << endl;
  cout << "c.Ver carrito de compras" << endl;
  cout << "d.Finalizar compra y salir" << endl;

  switch (options) {
    case 'a':
      cout << "Todos los productos disponibles son:" << endl;
      cout << "1.Churros DIana" << endl;
      cout << "2.Galletas Oreo" << endl;
      cout << "3.Bebida Energetica" << endl;
      cout << "Desea añadir una en especifico??" << endl;
      cout << "4.Añadir todas" << endl;

      break;

    default:
      break;
  }

  getch();
  return 0;
}