/*
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año 3° División
   Profesor: Prof. York
   Archivo: src/Act 4 - cadenas_punteros.cpp
   Actividad 4: Manipulación de Cadenas y Punteros en C/C++
   Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
   ====================================================================
*/
#include <iostream>
#include <cstring> // strlen(): mide la cantidad de caracteres de una cadena
using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la dirección de memoria física de 'edad'

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Modifiquen la salida agregando su Nombre y Apellido reales.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << "   CONTROL DE ACCESO RAM - INTEGRANTES:" << endl;
    cout << "    1) Alexis Maier" << endl;
    cout << "    2) Aramis Demaria" << endl;
    cout << "    3) Leon Melgarejo" << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese su edad: ";

    // ====================================================================
    // 1. CAPTURA MEDIANTE DESREFERENCIACIÓN (CÓDIGO EXPLICADO)
    // 💡 EXPLICACIÓN TÉCNICA:
    //    Usamos 'cin >> *p;' porque el asterisco '*' desreferencia al puntero.
    //    Esto le indica al compilador que debe guardar el número ingresado
    //    directamente en el casillero de memoria original de 'edad'.
    //    Si pusiéramos 'cin >> p;' sin asterisco, intentaríamos sobrescribir
    //    la dirección hexadecimal física de la RAM, provocando un error grave.
    // ====================================================================
    cin >> *p; // Captura el dato guardándolo directo en la memoria apuntada

    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;

    // ====================================================================
    // 2. CONDICIONAL CON PUNTERO DESREFERENCIADO
    // 💡 EXPLICACIÓN TÉCNICA:
    //    Evaluamos el valor alojado en la memoria usando '*p >= 18'.
    //    Si mostramos solo 'p', la consola imprimirá la dirección hexadecimal
    //    (ej: 0x61fe1c).
    // ====================================================================
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }

    // ====================================================================
    // 3. MANIPULACIÓN DE CADENAS SOBRE EL MISMO PUNTERO
    // 💡 EXPLICACIÓN TÉCNICA:
    //    El puntero no es exclusivo de los int: también puede apuntar a un
    //    arreglo de caracteres (cadena). Guardando la dirección del primer
    //    caracter podemos leer e imprimir la cadena completa usando '%s'
    //    (equivalente a cout << con char*).
    // ====================================================================
    cin.ignore(); // Limpia el Enter (\n) remanente en el buffer de entrada

    cout << "\n--- MANIPULACION DE CADENAS EN MEMORIA ---" << endl;
    cout << "=> Ingrese su nombre y apellido: ";

    char nombre[50];
    cin.getline(nombre, 50);

    char* punteroCadena = nombre; // El puntero apunta al primer caracter del arreglo
    cout << "Cadena almacenada:   " << punteroCadena << endl;
    cout << "Puntero base (hex):  " << (void*)punteroCadena << endl;
    cout << "Primer caracter:     " << *punteroCadena << endl;
    cout << "Cantidad de caracteres: " << (int)strlen(nombre) << endl;
    cout << "=====================================================" << endl;

    return 0; // Finalización exitosa de Windows (Código 0)
}