# Actividades de Programación — LPR 5° 3° "A-B"

**Materia:** Laboratorio de Programación (LPR)
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Curso:** 5° Año — 3° División — Grupos A-B
**Cuatrimestre:** 1°
**Profesor:** Mansilla Muñoz York Elías
**Horario:** miércoles y jueves de 15:15 a 17:15 Hs

---

## 📁 Estructura del repositorio

Este repositorio unifica la estructura obligatoria que piden las consignas de las
8 actividades del cuatrimestre. Ninguna actividad pide una carpeta que otra no
pida, salvo `proyecto_cpp/` y `proyecto_python/` (Actividad 1) y
`.gitattributes` (Actividad 7), por lo que el árbol es la **unión** de todas.

```
/
├── .gitattributes                  <-- Normalización de finales de línea (Act. 7)
├── .gitignore                      <-- Exclusiones (.exe, *.out, .vscode/)
├── Comun - LICENSE                 <-- Licencia MIT escolar
├── Comun - README.md               <-- Portada del proyecto
├── docs/                           <-- Carpeta de documentación formal
│   ├── manuales/                   <-- Manuales técnico y de usuario (Act. 5-8)
│   │   ├── Comun - manual_programador_v1.0.0.md
│   │   └── Comun - manual_usuario_v1.0.0.md
│   └── Comun - CHANGELOG.md        <-- Historial de versiones (Act. 5-8)
├── src/                            <-- Código fuente C++
│   ├── Act 2 - main.cpp                       (Act. 2 — Hola Mundo)
│   ├── Act 3 - calculo_area.cpp               (Act. 3)
│   ├── Act 4 - cadenas_punteros.cpp           (Act. 4)
│   ├── Act 5 - struct_punteros.cpp            (Act. 5)
│   └── Act 6/7/8 - *.cpp                      (Act. 6-8, pendiente)
├── capturas/                       <-- Evidencias de ejecución (.png)
│   └── Act 1-8 - LEEME capturas.md <-- Guía de qué capturar en cada actividad
├── proyecto_cpp/                   <-- Actividad 1 — versión C++
│   └── Act 1 - calculadoraEdad.cpp
└── proyecto_python/                <-- Actividad 1 — versión Python
    └── Act 1 - calculadoraEdad.py
```

### Convención de nombres

Todos los archivos empiezan con el número de actividad al que pertenecen:

- `Act X - nombre.ext` — archivo de una actividad puntual.
- `Comun - nombre.ext` — archivo compartido por todo el cuatrimestre.

**Excepción obligatoria:** `.gitignore` y `.gitattributes` **no** se renombran.
Git solo los reconoce con esos nombres exactos; si se llaman `Comun - .gitignore`
dejan de funcionar.

### Correspondencia actividad → raíz pedida por la consigna

| Act. | Carpeta raíz exigida | Archivo en este repo | Estado |
|:----:|----------------------|----------------------|:------:|
| 1 | `calculadoraedad/` | `proyecto_cpp/Act 1 - calculadoraEdad.cpp` + `proyecto_python/Act 1 - calculadoraEdad.py` | ✅ |
| 2 | `holamundo/` | `src/Act 2 - main.cpp` | ✅ |
| 3 | `calculoarea/` | `src/Act 3 - calculo_area.cpp` | ✅ |
| 4 | `cadenaspunteros/` | `src/Act 4 - cadenas_punteros.cpp` | ✅ |
| 5 | `sistemaproyecto/` | `src/Act 5 - struct_punteros.cpp` | ✅ |
| 6 | `repasogeneral/` | `src/Act 6 - repasogeneral.cpp` | ⏳ pendiente |
| 7 | `piedrapapelotijera/` | `src/Act 7 - piedrapapelotijera.cpp` | ⏳ pendiente |
| 8 | `juegodenaves/` | `src/Act 8 - juegodenaves.cpp` | ⏳ pendiente |

---

## 👥 Integrantes del grupo

| Nº | Apellido y nombre |
|:--:|-------------------|
| 1 | Alexis Maier |
| 2 | Aramis Demaria |
| 3 | Leon Melgarejo |

---

## 🚨 IMPORTANTE — La regla antiplagio

Todas las actividades traen una **REGLA OBLIGATORIA (EVITA EL PLAGIO)**: hay que
escribir el nombre y apellido reales en la salida de pantalla.

En este repositorio los cinco banners ya traen los tres integrantes del grupo:

```
  INTEGRANTES:
    1) Alexis Maier
    2) Aramis Demaria
    3) Leon Melgarejo
```

**Si el profesor pide que cada uno muestre su propio nombre**, comentá las líneas
de los otros dos y recompilá. En `Act 2 - main.cpp`, por ejemplo:

```cpp
cout << "    1) Alexis Maier" << endl;
//  cout << "    2) Aramis Demaria" << endl;
//  cout << "    3) Leon Melgarejo" << endl;
```

Ojo: el archivo tiene espacios en el nombre. En la terminal hay que ponerlo
entre comillas dobles:

```powershell
g++ "src/Act 3 - calculo_area.cpp" -o src/area.exe
```

---

## 🛠 Compilación (MinGW / MSYS2)

Desde la raíz del repositorio, en la terminal de VS Code (Ctrl + Ñ):

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

Si en las PCs del laboratorio no se puede compilar, es **obligatorio** usar
[OnlineGDB](https://www.onlinegdb.com/) y subir las capturas correspondientes a
`capturas/`.

---

## 📄 Entregables en `docs/`

Los informes en formato **APA v7** van en `docs/` con los nombres que fija cada
consigna:

| Actividad | Archivo del informe |
|:---------:|---------------------|
| 1 | `docs/InformeProyectoCalculadoraEdad.pdf` |
| 2 | `docs/InformeProyectoHOLAMUNDO.pdf` |
| 3 | `docs/InformeProyectoCALCULOAREA.pdf` |
| 4 | `docs/InformeProyectoCADENASPUNTEROS.pdf` |
| 5 | `docs/EEST1_LPR2026_ACT05_[ApellidoNombre_Grupo]_Informe_v1.0.0.pdf` |
| 6 | `docs/InformeEEST1_LPR2026_ACT06_G99_Informe_v1.0.0.pdf` |
| 7 | `docs/InformeEEST1_LPR2026_ACT07_G03_Informe_v1.0.0.pdf` |
| 8 | `docs/InformeEEST1_LPR2026_ACT08_G03_v1.0.0.pdf` |

Los `.pdf` de los manuales (programador y usuario) van en `docs/manuales/`
con la nomenclatura `manual_programador_v1.0.0.*` y `manual_usuario_v1.0.0.*`.

---

## 📸 Capturas requeridas en `capturas/`

| Actividad | Evidencia |
|:---------:|-----------|
| 2 | `gpp_version.png`, `extensiones_vscode.png`, `ejecucion_hola_mundo.png` |
| 3 | `compilacion_area.png`, `diagrama_flujo.png` |
| 4 | `ejecucion_punteros.png`, `esquema_ram.png` (diagrama a mano) |
| 5 | `ejecucion_struct.png` |
| 6 | `ejecucion_repasogeneral.png`, `traza_memoria.png` (diagrama a mano) |
| 7 | `jugada_consola.png`, `archivo_disco.png` |
| 8 | `combate_consola.png` |

Todas las capturas deben mostrar el **nombre y apellido** en la consola.

---

## 📅 Fechas de entrega (prórrogas)

| Actividad | Fecha |
|:---------:|:-----:|
| 1 | 31 de agosto de 2026 |
| 2 | 31 de agosto de 2026 |
| 3 | 17 de septiembre de 2026 |
| 4 | 17 de septiembre de 2026 |
| 5 | 25 de septiembre de 2026 |

---

## 📖 Glosario del taller

- **Scaffolding (Esqueleto):** plantilla de código con la estructura básica ya
  armada para concentrarse solo en completar la lógica que falta.
- **Filtro de Consistencia:** condiciones lógicas que evitan que el usuario
  ingrese datos imposibles (el día 35, el año 20900, un radio negativo...).
- **Año Bisiesto:** ocurre cada 4 años y tiene 366 días (Febrero tiene 29).
  Se detecta con `(anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)`.
- **Puntero:** variable que guarda la dirección de memoria de otra variable.
- **Operador de Dirección (`&`):** devuelve la dirección física en la RAM.
- **Desreferenciar (`*`):** leer o modificar el valor en la dirección apuntada.

---

## 🔗 Enlaces oficiales de referencia

- Referencia oficial C++ — <https://www.cplusplus.com>
- Documentación de Microsoft C++ — <https://learn.microsoft.com/es-es/cpp/>
- VS Code — <https://code.visualstudio.com>
- OnlineGDB — <https://www.onlinegdb.com>
- Git Book en español — <https://gitbook.com/esp/gitbook-es>
