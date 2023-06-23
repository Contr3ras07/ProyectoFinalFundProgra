#ifndef MI_LIB_H
#define MI_LIB_H

#include <string>
using namespace std;
// Declaración de una función en el archivo de encabezado
bool validarCarne(string carneIngresado);
void crearTxt();
void imprimirCuestionario(Reserva miReserva);
void diamesañoFichero();
bool maxPersonas(int cantidadPersonas);
bool horasValidas(string hora);

#endif