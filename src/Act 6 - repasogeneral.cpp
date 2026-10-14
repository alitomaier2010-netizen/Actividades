/*
   ====================================================================
   Materia: Laboratorio de Programacion (LPR) — 5°
   Institucion: E.E.S.T. N° 1 "Eduardo Ader" - Vicente Lopez
   Archivo: src/main.cpp
   Actividad 6: Taller Practico de Repaso y Consolidacion en C++
   ====================================================================
*/
#include <iostream>
using namespace std;

// Prototipos de funciones modulares
int sumaRecursiva(int n);
void intercambiarValores(int* ptrA, int* ptrB);

int main()
{
    cout << "=====================================================" << endl;
    cout << "   TALLER INTEGRADOR REPASO - ESTUDIANTE: Alexis Maier" << endl;
    cout << "=====================================================" << endl;

    // --- RETO 1: RECURSIVIDAD ---
    cout << "\n=== RETO 1: SUMA RECURSIVA ===" << endl;
    int num = 5;
    cout << "Suma acumulada de 1 hasta " << num << ": "
         << sumaRecursiva(num) << endl;

    // --- RETO 2: ARRAYS Y BUSQUEDA SECUENCIAL ---
    cout << "\n=== RETO 2: BUSQUEDA EN MEMORIA CONTIGUA ===" << endl;
    const int TAM = 10;
    int vectorDatos[TAM] = {12, 45, 78, 90, 122, 5, 18, 33, 67, 99};
    int numeroBuscar = 18;
    bool hallado = false;

    for (int i = 0; i < TAM; i++) {
        if (vectorDatos[i] == numeroBuscar) {
            cout << "[SISTEMA] Valor " << numeroBuscar
                 << " hallado en el indice [" << i << "]" << endl;
            cout << "          Direccion RAM Hexadecimal: "
                 << &vectorDatos[i] << endl;
            hallado = true;
            break; // Interrupcion optimizada del ciclo O(n)
        }
    }
    if (!hallado) {
        cout << "[SISTEMA] El valor " << numeroBuscar
             << " no existe en el arreglo." << endl;
    }

    // --- RETO 3: INTERCAMBIO CON PUNTEROS ---
    cout << "\n=== RETO 3: INTERCAMBIO DE CELDAS ===" << endl;
    int x = 100, y = 500;
    cout << "Valores previos  -> X: " << x << " | Y: " << y << endl;

    // Invocacion pasando direcciones de memoria
    intercambiarValores(&x, &y);

    cout << "Valores actuales -> X: " << x << " | Y: " << y << endl;
    cout << "=====================================================" << endl;

    return 0; // Codigo 0: Ejecucion exitosa
}

// Desarrollo de la funcion recursiva con caso base garantizado
int sumaRecursiva(int n)
{
    if (n <= 0) return 0; // Caso base obligatorio para prevenir Stack Overflow
    return n + sumaRecursiva(n - 1); // Llamada recursiva
}

// Desarrollo del intercambio fisico mediante desreferenciacion
void intercambiarValores(int* ptrA, int* ptrB)
{
    int temporal = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temporal;
}

