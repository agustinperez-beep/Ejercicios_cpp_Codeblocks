#include <iostream>

using namespace std;

int main()
{
    /*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

    float Precio, PrecioIVA;

    cout <<"Ingrese el monto: "<<endl;
    cin >> Precio;

    PrecioIVA = Precio * 1.21;

    cout<<"Importe a  pagar: "<<PrecioIVA<<endl;
    return 0;
}

