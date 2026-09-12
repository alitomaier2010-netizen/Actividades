#include <iostream>
#include <cstring>

using namespace std;

// 1. DEFINIR LA ESTRUCTURA
struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica;
};

// 2. FUNCION MODULAR
void cargarDatos(EntidadProyecto* ptr) {
    cout << "\n--- CARGA DE DATOS ASINCRONICA ---" << endl;

    cout << "Ingrese el ID (entero): ";
    cin >> ptr->id;

    cin.ignore();

    cout << "Ingrese el Nombre (texto): ";
    cin.getline(ptr->nombre, 50);

    cout << "Ingrese la Metrica (decimal/float): ";
    cin >> ptr->metrica;
}

int main() {

    // 3. DECLARAR LA ESTRUCTURA
    EntidadProyecto miEntidad;

    cout << "=====================================================" << endl;
    cout << " DESAFIO DE CONTROL DE MODELADO (LPR 5-3) " << endl;
    cout << "=====================================================" << endl;

    // 4. LLAMAR A LA FUNCION
    cargarDatos(&miEntidad);

    // 5. MOSTRAR RESULTADOS
    cout << "\n=== DATOS VERIFICADOS EN EL SISTEMA ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Metrica Registrada: " << miEntidad.metrica << endl;

    cout << "Direccion de Memoria RAM (Hexadecimal): "
         << &miEntidad << endl;

    cout << "=====================================================" << endl;

    return 0;
}