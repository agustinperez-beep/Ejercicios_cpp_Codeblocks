#include <iostream>

using namespace std;

int main()
{
   /*Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
   edad, sexo y altura en metros.
   Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/

   int Edad;
   char Sexo;
   float Altura;

   cout<<"Ingrese la edad: "<<endl;
   cin>> Edad;

   cout<<"Ingrese el sexo (M/F): "<<endl;
   cin>>Sexo;

   cout<<"Ingrese su altura en metros : "<<endl;
   cin>>Altura;


   Edad = Edad;
   cout<<"Edad: "<<Edad<<" anios"<<endl;

   Sexo = Sexo;
   cout <<"Sexo: "<<Sexo<<endl;

   Altura = Altura;
   cout <<"Altura: "<<Altura<<" mts"<<endl;
    return 0;
}
