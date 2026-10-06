# Manual del Usuario — v1.0.0

**Proyecto:** Actividades LPR 5° 3° "A-B"
**Materia:** Laboratorio de Programación (LPR)
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Autores:** Alexis Maier · Aramis Demaria · Leon Melgarejo
**Fecha:** 2026

> Guía de uso para alguien sin conocimientos previos de C++.
> Para el detalle técnico de implementación, ver el
> [manual del programador](Comun - manual_programador_v1.0.0.md).

---

## 1. ¿Qué es este proyecto?

Es una colección de **8 ejercicios de programación** del taller de Laboratorio de
Programación, escritos en C++ y Python. Cada ejercicio practice un concepto
distinto y se ejecuta en la consola (la ventana de texto donde escribís
comandos).

Los conceptos que se trabajan, en orden:

1. Validación de datos y años bisiestos.
2. Tu primer programa: "Hola Mundo".
3. Diseño modular: dividir un problema en funciones.
4. Punteros y acceso directo a la memoria RAM.
5. `struct`: agrupar datos relacionados en un solo bloque.
6. Suite de repaso e integración.
7. Juego de Piedra, Papel o Tijera con persistencia en disco.
8. Programación Orientada a Objetos: juego de naves.

---

## 2. ¿Qué necesitás para usarlo?

- Una computadora con Windows 10 u 11 (también funciona en Linux o macOS).
- El compilador **MinGW (GCC)**, que se instala con **MSYS2**.
- **Visual Studio Code** como editor.
- **Python 3.8** o superior, solo para el ejercicio de la Actividad 1.

---

## 3. Cómo abrir el proyecto

1. Abrí **Visual Studio Code**.
2. Menú **Archivo → Abrir carpeta**.
3. Elegí la carpeta del proyecto (la que contiene `README.md`).
4. Aceptá la recomendación de confiar en la carpeta.

VS Code puede pedirte instalar las extensiones de C++; aceptá, son necesarias
para que el editor entienda la sintaxis.

---

## 4. Abrir la terminal integrada

VS Code trae su propia terminal, que evita cambiar de ventana:

- Atajo: **Ctrl + Ñ** (en Windows también funciona **Ctrl + `**).
- En el menú: **Terminal → Nueva terminal**.

Notá que al abrir la terminal, la ruta mostrada debe ser la **raíz del proyecto**
(la que contiene `docs`, `src`, etc.). Si no lo es, escribí `cd` y la ruta.

---

## 5. Ejecutar un ejercicio

Todos los pasos siguientes se escriben **dentro de la terminal**. Presioná Enter
después de cada línea.

### 5.1 Compilar (paso 1)

El compilador traduce tu código fuente a un archivo ejecutable:

```powershell
g++ "src/Act 3 - calculo_area.cpp" -o src/area.exe
```

Qué significa cada parte:

| Parte | Significado |
|-------|-------------|
| `g++` | El compilador de C++ |
| `src/Act 3 - calculo_area.cpp` | Tu código fuente |
| `-o src/area.exe` | El nombre del ejecutable generado |

### 5.2 Ejecutar (paso 2)

```powershell
.\src\area.exe
```

El `.\` significa "en esta carpeta". En Linux o macOS sería `./src/area`.

### 5.3 Comandos de las cinco primeras actividades

```powershell
# Actividad 1 — C++
g++ "proyecto_cpp/Act 1 - calculadoraEdad.cpp" -o proyecto_cpp/calculadoraEdad.exe
.\proyecto_cpp\calculadoraEdad.exe

# Actividad 1 — Python (no necesita compilar)
python proyecto_python/Act 1 - calculadoraEdad.py

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

---

## 6. Cómo se usa cada programa

### Actividad 1 — Calculadora de edad

El programa pide **tres datos separados por espacios**: día, mes y año de
nacimiento. Por ejemplo:

```
Ingrese Dia, Mes y Anio de nacimiento (separados por espacios): 15 7 2000
```

Respuesta:

```
[SISTEMA] Fecha de hoy: 8/7/2026
[SISTEMA] Edad calculada: 25 anos.
```

La fecha de referencia está fija en `8/7/2026` porque así lo pide la consigna.
Si escribís una fecha que no existe (por ejemplo `31 2 2020` o el año `20900`),
el programa responde `[ERROR] La fecha ingresada no existe en el calendario.`
y termina.

> La versión en Python pide cada dato por separado, en tres líneas distintas.

### Actividad 2 — Hola Mundo

No pide datos. Solo muestra un saludo y tu nombre por pantalla.

### Actividad 3 — Área de un círculo

Pide el **radio en centímetros**. Valida que sea positivo y, según el tamaño,
dibuja una diana de tiro en tres escalas distintas:

- Radio de 0 a 5 cm → diana mini.
- Radio de 5 a 12 cm → diana estándar.
- Radio mayor a 12 cm → diana gigante.

Si ingresás un número negativo o cero, muestra `[ERROR]` porque un círculo no
puede tener esas medidas.

### Actividad 4 — Control de acceso por edad

Pide tu **edad**. Si cumpliste 18 años o más, muestra `[ACCESO APROBADO]`; si
no, `[ACCESO RECHAZADO]`. En ambos casos imprime la **dirección de memoria** en
formato hexadecimal (por ejemplo `0x4a2f7ffd6c`), que cambia en cada
ejecución.

Después pide tu **nombre y apellido** para demostrar la manipulación de cadenas
sobre el mismo puntero.

### Actividad 5 — Modelo de datos

Pide, en orden:

1. Un **ID** (número entero).
2. Un **nombre o descripción** (texto, puede tener espacios).
3. Una **métrica** (número decimal).

Devuelve los tres datos leídos más la dirección de memoria del bloque completo.

---

## 7. Problemas frecuentes

### `g++ no se reconoce como comando`

El compilador no está en el `Path` de Windows. Solución: instalá **MSYS2** desde
<https://www.msys2.org> y agregá la carpeta `C:\msys64\mingw64\bin` a la variable
de entorno `Path`, luego reiniciá la terminal.

### `el sistema no puede ejecutar el archivo` o `no es una aplicación Win32 válida`

Te saltaste la compilación. Ejecutá primero el comando `g++ ...` y después el
comando `.\src\...exe`.

### `undefined reference to 'nombreDeLaFuncion'`

En C++ hay que **declarar el prototipo** de la función antes de `main()`. La
Actividad 3 lo muestra en la línea `double calcularAreaCirculo(double radio);`.

### `strlen was not declared in this scope`

Falta la biblioteca de cadenas. Agregá `#include <cstring>` al principio del
archivo.

### El programa dice `[ERROR]`

No es una falla: es el **filtro de consistencia** funcionando. El programa está
rechazando un dato imposible. Revisá el mensaje:

- `La fecha ingresada no existe en el calendario` → día, mes o año inválidos.
- `El radio debe ser un valor positivo` → el círculo necesita un radio > 0.
- `Deben ingresar numeros enteros` (Python) → escribiste letras.

### ¿Puedo usar la PC del laboratorio?

Las consignas dicen que las PCs de la escuela pueden bloquear la compilación por
falta de permisos de administrador. Si es tu caso, usá **OnlineGDB**
(<https://www.onlinegdb.com>), pegá el código y hacé la captura de pantalla.

---

## 8. Cómo entregar el trabajo

1. Ejecutá cada programa y hacé una **captura de pantalla** de la terminal con
   tu **nombre y apellido visible**.
2. Guardá las capturas en la carpeta `capturas/` con los nombres indicados.
3. Redactá el informe en formato **APA v7** y guardalo como PDF en `docs/`.
4. Completá la carpeta de campo y la planilla del P.I.A.
5. Subí **todo** (carpetas y archivos) al repositorio de GitHub.

> **Importante:** no se aceptan carpetas sueltas ni archivos comprimidos en ZIP
> o RAR. El repositorio tiene que estar completo en GitHub.

---

## 9. Glosario rápido

| Término | Significado |
|---------|-------------|
| **Código fuente** | El texto que escribís vos; la computadora no lo entiende directamente |
| **Compilador** | El "traductor" que convierte tu código en un ejecutable |
| **Depurador (debugger)** | Herramienta que ejecuta el programa paso a paso para encontrar errores |
| **IDE** | Editor + compilador + depurador juntos (por ejemplo, Visual Studio Community) |
| **Terminal / consola** | Ventana de texto donde escribís comandos |
| **Path** | Lista de carpetas donde Windows busca los programas ejecutables |
| **Puntero** | Variable que guarda la dirección de memoria de otra variable |
| **`&`** | Operador de dirección: devuelve dónde está un dato en la RAM |
| **`*`** | Desreferencia: accede al dato guardado en esa dirección |
| **`struct`** | Agrupador que junta en un solo bloque datos del mismo entidad |
| **`->`** | Operador flecha: accede a un miembro cuando la variable es un puntero |