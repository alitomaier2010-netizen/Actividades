# Actividad 7 — Mini Juego "Piedra, Papel o Tijera" con Persistencia de Datos (struct + fstream)

**Materia:** Laboratorio de Programación (LPR)
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Curso:** 5° Año — 3° División — Grupos A-B
**Profesor:** Mansilla Muñoz York Elías

## 📁 Estructura del repositorio

```
piedrapapelotijera/
├── .gitattributes
├── .gitignore
├── LICENSE
├── README.md
├── docs/
│   ├── manuales/
│   │   ├── manual_programador_v1.0.0.pdf
│   │   ├── manual_programador_v1.0.0.md
│   │   ├── manual_usuario_v1.0.0.pdf
│   │   └── manual_usuario_v1.0.0.md
│   ├── CHANGELOG.md
│   └── InformeEEST1_LPR2026_ACT07_G03_Informe_v1.0.0.pdf
├── src/
│   ├── main.cpp                  <-- Juego + persistencia en disco
│   └── historial_partidas.txt    <-- Archivo generado por el programa
└── capturas/
    ├── jugada_consola.png
    └── archivo_disco.png
```

## 👥 Integrantes del grupo

| Nº | Apellido y nombre |
|:--:|-----------------|
| 1 | Alexis Maier |
| 2 | Aramis Demaria |
| 3 | Leon Melgarejo |

## 🎮 Menú del juego

1. Jugar Partida (Piedra, Papel o Tijera).
2. Ver Historial de Partidas Guardadas en Disco.
3. Salir del Sistema.

Los datos se guardan en `src/historial_partidas.txt` en formato CSV con
`ios::app` (Append), sin sobrescribir partidas previas.

## 🛠 Compilación (MinGW / MSYS2) o OnlineGDB

```powershell
g++ -std=c++11 "src/main.cpp" -o "src/piedrapapelotijera.exe"
.\src\piedrapapelotijera.exe
```

## ⚠ REGLA OBLIGATORIA (EVITA EL PLAGIO)

El juego empieza solicitando el "Nombre / Nickname" del jugador, que se
imprime en cada partida y queda persistido en el archivo de disco.
