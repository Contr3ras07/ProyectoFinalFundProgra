#include <iostream>
#include "validaciones.h"
using namespace std;

bool validarCarne(string carneIngresado)
{
    if (carneIngresado.length() == 8)
    {

        return false;
    }
    cout << "El carne ingresado no es valido.\n";
    return true;
}
