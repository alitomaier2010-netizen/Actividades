# Manual del Programador — v1.0.0

**Proyecto:** Actividades LPR 5° 3° "A-B"
**Materia:** Laboratorio de Programación (LPR)
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Autores:** Alexis Maier · Aramis Demaria · Leon Melgarejo
**Fecha:** 2026

> Documento técnico interno. Complementa al
> [manual de usuario](Comun - manual_usuario_v1.0.0.md).

---

## 1. Arquitectura del repositorio

El repositorio sigue la estructura obligatoria que fija la consigna. Todas las
actividades comparten el mismo esqueleto; solo la Actividad 1 se separa en dos
lenguajes (`proyecto_cpp/` y `proyecto_python/`).

```
/
├── .gitattributes          Normalización de finales de línea (LF en repo, CRLF en .bat)
├── .gitignore              Excluye .exe, *.out, .vscode/, cachés y comprimidos
├── LICENSE                 Licencia MIT de uso escolar
├── README.md               Portada del proyecto
├── docs/
│   ├── manuales/           Este manual y el manual de usuario
│   └── CHANGELOG.md        Historial de versiones (SemVer / DocVer)
├── src/                    Código fuente C++ (un archivo por actividad)
├── capturas/               Evidencias de ejecución en PNG
├── proyecto_cpp/           Actividad 1 — versión C++
└── proyecto_python/        Actividad 1 — versión Python
```

### Convención de nombres

Todos los archivos empiezan con el número de actividad al que pertenecen,
seguido de un nombre descriptivo en `snake_case`:

| Prefijo | Uso | Ejemplo |
|---------|-----|---------|
| `Act X - ` | archivo de una actividad puntual | `src/Act 3 - calculo_area.cpp` |
| `Comun - ` | archivo compartido por todo el cuatrimestre | `Comun - README.md` |

- `src/Act 2 - main.cpp` conserva el nombre `main.cpp` porque la Actividad 2 lo
  exige por convención profesional; solo se le antepone el prefijo.
- Un solo archivo fuente por actividad, para que compilar y entregar sea directo:
  `g++ src/<archivo>.cpp -o src/<nombre>.exe`.
- Los ejecutables nunca se versionan (ver `.gitignore`); los `.png` de
  `capturas/` sí, porque son la evidencia de evaluación.

**Excepción obligatoria:** `.gitignore` y `.gitattributes` **no** llevan prefijo.
Git solo los reconoce con esos nombres exactos en la raíz del repositorio; si se
llaman `Comun - .gitignore` dejan de aplicarse.

---

## 2. Requisitos del entorno

| Componente | Versión mínima | Verificación |
|------------|----------------|--------------|
| MinGW (GCC) | GCC 13 | `g++ --version` |
| MSYS2 |Actual | Instalador oficial |
| VS Code | Actual | `code --version` |
| Python | 3.8 | `python --version` |

Extensiones de VS Code obligatorias (panel `Ctrl+Shift+X`):

1. **C/C++** (Microsoft) — sintaxis e intsellisense.
2. **C/C++ Extension Pack** (Microsoft) — depuración y navegación de código.
3. **Code Runner** (opcional) — ejecutar con un clic.

Si el compilador no está en el `Path`, la terminal no finds `g++`. Verificá con:

```powershell
g++ --version
```

---

## 3. Compilación

Desde la raíz del repositorio:

```powershell
# Actividad 1 — C++
g++ "proyecto_cpp/Act 1 - calculadoraEdad.cpp" -o proyecto_cpp/calculadoraEdad.exe
.\proyecto_cpp\calculadoraEdad.exe

# Actividad 2
g++ "src/Act 2 - main.cpp" -o src/holamundo.exe
.\src\holamundo.exe

# Actividad 3
g++ "src/Act 3 - calculo_area.cpp" -o src/area.exe
.\src\area.exe

# Actividad 4
g++ "src/Act 4 - cadenas_punteros.cpp" -o src/cadenaspunteros.exe
.\src\cadenaspunteros.exe

# Actividad 5
g++ "src/Act 5 - struct_punteros.cpp" -o src/sistemaproyecto.exe
.\src\sistemaproyecto.exe
```

Actividad 1 en Python no necesita compilación:

```powershell
python proyecto_python/Act 1 - calculadoraEdad.py
```

### Si el laboratorio bloquea la compilación

Las consignas obligan a usar **OnlineGDB** cuando las PCs de la escuela no
permiten compilar. En ese caso se sube la captura del editor de OnlineGDB a
`capturas/`.

---

## 4. Detalle técnico por actividad

### 4.1 Actividad 1 — Calculadora de edad

**Ubicación:** `proyecto_cpp/Act 1 - calculadoraEdad.cpp`, `proyecto_python/Act 1 - calculadoraEdad.py`

Dos funciones de apoyo:

- `esBisiesto(anio)` — devuelve `true` si el año tiene 366 días:
  `(anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)`.
- `esFechaValida(d, m, a)` — filtro de consistencia. Rechaza años fuera de
  `[1900, 2026]`, meses fuera de `[1, 12]`, días fuera de `[1, 31]`, el día 31
  en meses de 30 días, y el día 29/30 de febrero según haya bisiesto o no.

El ajuste de edad:

```cpp
int edad = anioA - anioN;
if (mesN > mesA || (mesN == mesA && diaN > diaA)) {
    edad = edad - 1;
}
```

Si el mes de nacimiento ya pasó, o si estamos en el mismo mes pero todavía no
llegó el día, la persona **todavía no cumplió años** este año, así que se
descuenta 1. Si el cumpleaños es exactamente hoy, no se descuenta.

**Comparación de lenguajes:** la versión C++ usa `&&` / `||` y `true/false`; la
versión Python usa `and` / `or` y `True/False`, y captura `ValueError` con un
bloque `try/except` en lugar de dejar que el programa termine con error.

### 4.2 Actividad 2 — Hola Mundo

**Ubicación:** `src/Act 2 - main.cpp`

`#include <iostream>` agrega la biblioteca estándar de entrada/salida.
`using namespace std;` evita anteponer `std::` en cada comando de consola.
`return 0;` le indica al sistema operativo que el programa terminó con éxito.

### 4.3 Actividad 3 — Diseño modular y top-down

**Ubicación:** `src/Act 3 - calculo_area.cpp`

El diseño **top-down** se aplica en tres pasos:

1. **Prototipo** antes de `main()`: `double calcularAreaCirculo(double radio);`
   Le avisa al compilador que la función existe. Sin esta línea, el compilador
   leería `main()` y no sabría qué hacer con la llamada.
2. **Invocación** dentro de `main()`:
   `double areaFinal = calcularAreaCirculo(radioEstudiante);`
3. **Implementación** debajo de `main()`:
   `const double PI = 3.1415926535; double area = PI * (r * r); return area;`

`const double PI` deja el casillero bloqueado en memoria: escribir `PI = 5.5;`
detiene la compilación. En sistemas críticos (aviones, medicina) esa
inmutabilidad evita que un valor universal se corrompa en tiempo de ejecución.

El filtro `if (radioEstudiante <= 0)` frena el programa: un círculo de radio 0
degeneraría en un punto sin área, y un radio negativo no tiene significado
geométrico.

### 4.4 Actividad 4 — Cadenas y punteros

**Ubicación:** `src/Act 4 - cadenas_punteros.cpp`

```cpp
int edad = 0;
int* p = &edad;   // 'p' guarda la DIRECCIÓN de 'edad'
cin >> *p;        // desreferencia: escribe EN 'edad', no en la dirección
```

Diferencia clave:

| Expresión | Qué produce en pantalla |
|-----------|-------------------------|
| `cout << p;`  | Dirección hexadecimal, p. ej. `0x61fe1c` |
| `cout << *p;` | El valor alojado, p. ej. `20` |

Escribir `cin >> p;` sin asterisco intentaría sobrescribir la dirección física
del puntero: es un error grave.

Sobre el mismo puntero se manipula una cadena:

```cpp
char nombre[50];
cin.ignore();               // limpia el Enter (\n) del búfer
cin.getline(nombre, 50);    // lee la línea completa con espacios
char* punteroCadena = nombre;
strlen(nombre);             // cantidad de caracteres -> requiere <cstring>
```

Sin `cin.ignore()`, el `\n` pendiente del `cin >> *p` anterior hace que
`getline` lea una cadena vacía y se salte la lectura.

### 4.5 Actividad 5 — Structs y punteros

**Ubicación:** `src/Act 5 - struct_punteros.cpp`

```cpp
struct EntidadProyecto {
    int   id;
    char  nombre[50];
    float metrica;
};

void cargarDatos(EntidadProyecto* ptr);   // prototipo
cargarDatos(&miEntidad);                   // invocación por dirección
```

Dentro de la función se accede a los miembros con la **operator flecha** (`->`),
no con punto, porque `ptr` es un puntero y el punto solo funciona sobre objetos:

```cpp
cin >> ptr->id;              // equivalente a (*ptr).id
cin.getline(ptr->nombre, 50);
cin >> ptr->metrica;
```

El **pasaje por referencia** evita copiar toda la estructura en la RAM: solo se
pasa la dirección (8 bytes en 64 bits), sin importar cuántos miembros tenga.

---

## 5. Versionado con Git

```powershell
git init
git add .
git commit -m "Carga inicial: estructura y actividades 1 a 5"
git remote add origin https://github.com/<usuario>/<repo>.git
git push -u origin main
```

Convenciones de commit recomendadas: `feat:`, `fix:`, `docs:`, `refactor:`.

### Cómo se versionan las entregas

- Los `.exe` **no** se suben (ver `.gitignore`).
- Los `.png` de `capturas/` **sí** se suben: son la evidencia evaluada.
- Los informes `.pdf` de `docs/` **sí** se suben.
- `src/historial_partidas.txt` de la Actividad 7 **sí** se sube: demuestra que la
  persistencia en disco funciona.

---

## 6. Solución de problemas

| Síntoma | Causa probable | Solución |
|---------|----------------|----------|
| `g++ no se reconoce` | MinGW no está en el `Path` | Agregar `C:\msys64\mingw64\bin` al `Path` y reiniciar la terminal |
| `undefined reference to calcularAreaCirculo` | Falta el prototipo | Declarar la firma antes de `main()` (Actividad 3) |
| `no matching function for call` | `cin.getline` sin `#include <cstring>` / sin `cin.ignore()` | Agregar el include y limpiar el búfer |
| `strlen` no declarado | Falta `#include <cstring>` | Agregar el include |
| El programa aborta con `exit code 1` | El filtro de consistencia rechazó el dato | El mensaje `[ERROR]` indica qué corregir: revisar el rango del año, del radio o la fecha |
| El `.exe` no aparece en GitHub | Está ignorado a propósito | Es lo correcto; subí la captura de consola como evidencia |
| Cambios con `\n` en vez de `\r\n` | Normalización de línea | `.gitattributes` fuerza LF en el repo y CRLF solo en `.bat`/`.cmd` |