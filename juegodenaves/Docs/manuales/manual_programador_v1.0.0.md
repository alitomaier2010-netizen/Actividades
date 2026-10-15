# Manual del Programador — v1.0.0

**Proyecto:** Actividad 8 — Juego de Naves en Consola (POO)
**Versión:** 1.0.0 Baseline Aprobado

## 1. Clases y encapsulamiento

- `class Nave`: atributos privados `x, y, vidas`; métodos públicos `getX, getY, getVidas, reducirVida, pintar, borrar, mover`.
- `class Asteroide`: enemigo que baja y reaparece (`mover()`).
- `class Bala`: proyectil que sube (`mover()`, `fueraDeRango()`).

## 2. Control de movimiento

- `W/A/S/D` mueven la nave; `ESPACIO` dispara (bloqueado por `tolower`).
- `gotoxy` y `ocultarCursor` usan la API de Windows (`windows.h`).
- Colisiones: asteroide-jugador y bala-asteroide, con re-spawn.

## 3. Compilación (Windows)

```powershell
g++ "src/main.cpp" -o "src/juegodenaves.exe"
.\src\juegodenaves.exe
```

En OnlineGDB seleccionar C++17 y activar opción para Windows si procede.

## 4. Anti-plagio

El HUD muestra el `nombrePiloto` ingresado por el usuario durante la partida,
garantizando que la captura pertenece al estudiante.
