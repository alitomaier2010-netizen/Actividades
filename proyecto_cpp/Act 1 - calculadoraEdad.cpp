/*
   ====================================================================
   Materia: Laboratorio de Programacion (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" - Vicente Lopez
   Curso: 5° Año 3° Division   |   Profesor: Prof. York
   Archivo: proyecto_cpp/Act 1 - calculadoraEdad.cpp
   Actividad 1: De Revision Integral (Python & C++)
   Objetivo: Calcular la edad exacta validando el calendario real.
   ====================================================================
*/
#include <iostream>
using namespace std;

// 1. Evalua si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// 2. Filtro de consistencia de calendario
bool esFechaValida(int d, int m, int a) {
    if (a < 1900 || a > 2026) return false;
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > 31) return false;
    // Meses de 30 dias
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return false;
    // Caso especial de Febrero
    if (m == 2) {
        if (esBisiesto(a)) {
            if (d > 29) return false;
        } else {
            if (d > 28) return false;
        }
    }
    return true;
}

int main() {
    int diaN, mesN, anioN;
    int diaA = 8, mesA = 7, anioA = 2026; // Fecha actual para el ejercicio

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Reemplacen "Estudiante" por su nombre y apellido reales en la salida.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << "  CALCULADORA DE EDAD - INTEGRANTES:" << endl;
    cout << "    1) Alexis Maier" << endl;
    cout << "    2) Aramis Demaria" << endl;
    cout << "    3) Leon Melgarejo" << endl;
    cout << "=====================================================" << endl;
    cout << "Ingrese Dia, Mes y Anio de nacimiento (separados por espacios): ";
    cin >> diaN >> mesN >> anioN;

    if (!esFechaValida(diaN, mesN, anioN)) {
        cout << "[ERROR] La fecha ingresada no existe en el calendario." << endl;
        return 1;
    }

    int edad = anioA - anioN;

    // COMPLETADO: Si el mes de nacimiento es posterior al mes actual, o si
    // estamos en el mismo mes pero todavia no llego el dia de cumpleanos,
    // la persona aun no cumplio anos este anio, por eso se le resta 1.
    if (mesN > mesA || (mesN == mesA && diaN > diaA)) {
        edad = edad - 1;
    }

    cout << "\n[SISTEMA] Fecha de hoy: " << diaA << "/" << mesA << "/" << anioA << endl;
    cout << "[SISTEMA] Edad calculada: " << edad << " anos." << endl;
    cout << "=====================================================" << endl;
    return 0;
}