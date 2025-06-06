/*Calculadora Simple
Que contenga (+,-,*,/)*/
#include <iostream>
using namespace std;
int main (){
    int calculator;
    double suma, resta, multiply,division;
    double n1, n2;

    cout<<"Bienvenido a la Calculadora Simple."<<endl;
    cout<<"Por favor digite una opcion a  realizar:"<<endl;
    cout<<"1.Suma de Numeros"<<endl;
    cout<<"2.Resta de Numeros"<<endl;
    cout<<"3.Multiplicacion de Numeros"<<endl;
    cout<<"4.Division de Numeros"<<endl;
    cout<<"5.Salir"<<endl;
    cin>>calculator;

    switch (calculator)
    {
    case 1:
        cout<<"Por favor ingrese su primer numero a sumar:"<<endl;
        cin>>n1;
        cout<<"Por favor ingrese su segundo numero a sumar:"<<endl;
        cin>>n2;

        suma = n1+n2;
        cout<<"La suma de sus dos numeros es de:"<<suma<<endl;
        break;

    case 2:
        cout<<"Por favor ingrese su primer numero a restar:"<<endl;
        cin>>n1;
        cout<<"Por favor ingrese su segundo numero a restar:"<<endl;
        cin>>n2;

        resta = n1-n2;
        cout<<"La resta de sus dos numeros es de:"<<resta<<endl;
        break;

    case 3:
        cout<<"Por favor ingrese su primer numero a multiplicar:"<<endl;
        cin>>n1;
        cout<<"Por favor ingrese su segundo numero a multiplicar:"<<endl;
        cin>>n2;

        multiply = n1*n2;
        cout<<"La multiplicacion de sus dos numeros es de:"<<multiply<<endl;

        break;

    case 4:
        cout<<"Por favor ingrese su primer numero a divir:"<<endl;
        cin>>n1;
        cout<<"Por favor ingrese su segundo numero a dividir:"<<endl;
        cin>>n2;

        division = (n1/n2);
        cout<<"La division de sus dos numeros es de:"<<division<<endl;
        break;

    case 5:
        cout<<"Gracias por preferirnos, hasta pronto!!"<<endl;
        break;
    
    default:
        cout<<"Por favor ingresar digitos validos!!"<<endl;
        break;
    }


    



    return 0;
}