# Manual del Programador — v1.0.0

**Proyecto:** Actividad 6 — Taller de Repaso General
**Materia:** LPR — E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Autores:** Alexis Maier, Aramis Demaria, Leon Melgarejo
**Versión:** 1.0.0 Baseline Aprobado

## 1. Arquitectura

- `src/main.cpp`: programa único con tres retos (recursividad, búsqueda secuencial, intercambio con punteros).
- Función `sumaRecursiva(int n)`: recursion con caso base `n <= 0`.
- Búsqueda secuencial O(n) con `break` sobre `vectorDatos[10]`.
- `intercambiarValores(int* ptrA, int* ptrB)`: intercambio físico por desreferenciación.

## 2. Compilación

```powershell
g++ "src/main.cpp" -o "src/repasogeneral.exe"
.\src\repasogeneral.exe
```

## 3. Convenciones

- Convención de nombres: `Act X - nombre.ext`.
- Anti-plagio: el programa imprime el nombre del integrante; para entregar, cada uno deja el suyo descomentado.
- Control de versiones: git, rama `actividad-6`, push a GitHub + GitLab.

## 4. Modificación recomendada para integrantes

En `src/main.cpp`, la línea del banner muestra a **Alexis Maier**. Para probar otro nombre, comentar/descomentar según corresponda.
