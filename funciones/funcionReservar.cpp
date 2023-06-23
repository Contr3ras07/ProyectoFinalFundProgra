#include <iostream>
#include <fstream>

// #include "validaciones/validaciones.h"
using namespace std;

// DEFINICION DE ESTRUCTURA RESERVA
struct Reserva
{
    string carne;
    string lab;
    string fecha;
    string hora;
    string proposito;
    int cantidadPeronas;
    // FUNCION DATOS
    string concatenarDatos()
    {
        string datosConcatenados = "\nIng. Informatica." + lab + carne + fecha + hora + proposito + to_string(cantidadPeronas);
        return datosConcatenados;
    }
};

// PROTOTIPO FUNCIONES
bool validarCarne(string carneIngresado);
void crearTxt();
void imprimirCuestionario(Reserva miReserva);
void diamesañoFichero();
bool maxPersonas(int cantidadPersonas);
bool horasValidas(string hora);

// MENU USUARIO

int main(int argc, char const *argv[])
{
    Reserva miReserva;

    int opcion, opcionReserva;
    cout << "PRESIONE 1 PARA INICIAR: \n";
    cin >> opcion;
    switch (opcion)
    {
    case 1: // RESERVA DE LABORATORIO
        cout << "------------------------------------------------\n";
        cout << "        BIENVENIDO AL MENU DE RESERVA\n";
        cout << "------------------------------------------------\n";
        cout << "Complete los siguientes campos para realizar una reserva de laboratorio exitosa.\n";
        cout << "¿Es estudiante de ingenieria informatica?\n Si = 1.\n No = 0.\n";
        cin >> opcionReserva;
        if (opcionReserva == 1)
        {

            do
            {
                cout << "Favor ingrese su carne: \n";
                cin >> miReserva.carne;
            } while (validarCarne(miReserva.carne));
            // INICIA RESERVA DE LABORATORIO
            cout << "Ingrese el laboratorio a reservar (Escriba el nombre del laboratorio):\n1. L1.\n2. L2.\n3. L3.\n4. L4.\n5. L5.\n6. L6.\n7. L7.\n";
            cin >> miReserva.lab;
            if (miReserva.lab == "L1")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
            }
            else if (miReserva.lab == "L2")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
            else if (miReserva.lab == "L3")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
            else if (miReserva.lab == "L4")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
            else if (miReserva.lab == "L5")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
            else if (miReserva.lab == "L6")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
            else if (miReserva.lab == "L7")
            {
                imprimirCuestionario(Reserva(miReserva));
                diamesañoFichero();
                break;
            }
        }
        else
            cout << "Lamentablemente esta opcion solo esta disponible para estudiandes de ingenieria informatica.\n";
        break;

    default:
        break;
    }
    return 0;
}

// FUNCION VALIDAR CARNE

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
    ofstream archivo("DiaMesAnio.txt", ios::out); // NOMBRE DEL ARCHIVO
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
