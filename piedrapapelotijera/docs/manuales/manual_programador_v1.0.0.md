# Manual del Programador — v1.0.0

**Proyecto:** Actividad 7 — Mini Juego Piedra, Papel o Tijera + Persistencia
**Versión:** 1.0.0 Baseline Aprobado

## 1. Arquitectura

- `src/main.cpp`: juego principal con menú do-while.
- `struct Partida`: `idPartida, jugador, eleccionJugador, eleccionIA, resultado`.
- `void jugarPartida(int& contadorID)`: procesa una partida contra IA aleatoria.
- `void guardarEnDisco(const Partida& p)`: escribe en CSV con `ofstream` y `ios::app`.
- `void leerHistorialDisco()`: lee y muestra con `ifstream` delimitando por comas.

## 2. Persistencia

- Archivo: `src/historial_partidas.txt`.
- Formato por línea: `id,jugador,eleccionJugador,eleccionIA,resultado`.
- El modo `ios::app` garantiza que no se sobrescriban partidas anteriores.

## 3. Compilación

```powershell
g++ -std=c++11 "src/main.cpp" -o "src/piedrapapelotijera.exe"
.\src\piedrapapelotijera.exe
```

## 4. Convenciones

- `.gitattributes`: normalización LF/CRLF.
- Anti-plagio: la partida pide nombre y lo persiste.
- Capturas: `capturas/jugada_consola.png`, `capturas/archivo_disco.png`.
