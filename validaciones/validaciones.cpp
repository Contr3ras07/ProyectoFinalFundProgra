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

// FUNCION CUESTIONARIO DE RESERVA
void imprimirCuestionario(Reserva miReserva)
{

    cout << "Ingrese la fecha en la que desea reservar (DD/MM/YY):\n";
    cin >> miReserva.fecha;
    do
    {
        cout << "Ingrese la hora en la que desea reservar formato 24 horas: \n";
        cin >> miReserva.hora;
    } while (horasValidas(miReserva.hora));

    do
    {
        cout << "Ingrese la cantidad de personas que utilizaran el laboratorio: \n";
        cin >> miReserva.cantidadPeronas;
    } while (maxPersonas(miReserva.cantidadPeronas));

    cout << "Defina el proposito para el que utilizara el laboratorio. (evento interno o externo):\n";
    cin >> miReserva.proposito;
}

// FUNCION DEL TXT
void diamesañoFichero()
{
    ofstream archivo("DiaMesAnio.txt"); // NOMBRE DEL ARCHIVO
    if (archivo.is_open())              // VERIFICA SI EL ARCHIVO SE ABRIO CORRECTAMENTE
    {
        archivo << "saludos\n"
                << endl; // TEXTO QUE DEBERIA ESCRIBIR EN EL TXT
        archivo.close();
        cout << "Su reserva se realizo correctamente."; // MUESTRA ESTO AL ESCRIBIR EN EL TXT
    }
    else
    {
        cout << "Su reservacion no se logro realizar" << endl; // SUCEDE EN CASO FALLE LA RESERVACION
    }
}

// FUNCION PARA EL MAXIMO DE PERSONAS
bool maxPersonas(int cantidadPersonas)
{

    if (cantidadPersonas <= 18)
    {
        return false;
    }
    cout << "Excedio la capacidad maxima del laboratorio.\n";
    return true;
}

// FUNCION DE HORARIO PERMITIDO
bool horasValidas(string hora)
{
    if (hora < "17 : 00")
    {
        return false;
    }
    cout << "Ingrese horarios validos, el laboratorio solo esta abierto de 7:00 a.m a 5:00 p.m\n";
    return true;
}
