#include <iostream>
using namespace std;

// Definición de la estructura para representar un estudiante
struct Estudiante {
    string nombre;
    int edad;
};

int main() {
    const int TAMANIO_ARREGLO = 5;

    // Declaración del arreglo de estructuras
    Estudiante estudiantes[TAMANIO_ARREGLO];

    // Solicitar al usuario ingresar los datos de los estudiantes
    for (int i = 0; i < TAMANIO_ARREGLO; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        getline(cin, estudiantes[i].nombre);
        
        cout << "Ingrese la edad del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].edad;
        cin.ignore(); // Limpiar el buffer del teclado
    }

    // Mostrar los datos de los estudiantes
    cout << "\nDatos de los estudiantes:\n";
    for (int i = 0; i < TAMANIO_ARREGLO; i++) {
        cout << "Estudiante " << i+1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << endl;
    }

    return 0;
}






