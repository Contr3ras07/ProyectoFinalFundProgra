#include <iostream>
using namespace std;
// TEMA: SISTEMA DE RESERVA DE LABORATORIOS.

// ESTRUCTURAS.

// PROTOTIPOS DE FUNCIONES.

// FUNCION MAIN.
int main(int argc, char const *argv[])
{
    int opcion, cod;
    cout << "-------------------------------------------\n";
    cout << "   ¡EL LABORATORIO DE LOS CAMPEONES!\n";
    cout << "           Laboratoryze me!\n";
    cout << "-------------------------------------------\n";
    cout << "              * M E N U *\n";
    cout << "-------------------------------------------\n";
    cout << "1. Ingresar como administrador.\n2. Ingresar como usuario.\n3. Salir.\n";
    system("cls");
    cout << "Ingrese el numero de la opcion que desea utilizar: \n";
    cin >> opcion;
    switch (opcion)
    {
    case 1: // ADMIN

        cout << "Ingrese el codigo de verificacion: ";
        cin >> cod;
        if (cod == 0000)
        {
            cout << "Usted ha ingresado al menu de administrador.\n";
            cout << "Seleccione la opcion que desea utilizar: \n";
        }

        break;
    case 2: // USER
        cout << "Seleccione la opcion que desea utilizar: \n";
        break;
    case 3: // SALIR
        cout << "Esperamos vuelva pronto!\n";
        break;
    default:
        break;
    }

    return 0;
}

// FUNCIONES.