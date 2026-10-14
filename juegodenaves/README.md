# Actividad 8 — Programación Orientada a Objetos (POO) en C++ — Juego de Naves en Consola (class Nave)

**Materia:** Laboratorio de Programación (LPR)
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
**Curso:** 5° Año — 3° División — Grupos A-B
**Profesor:** Mansilla Muñoz York Elías

## 📁 Estructura del repositorio

```
juegodenaves/
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
│   └── InformeEEST1_LPR2026_ACT08_G03_v1.0.0.pdf
├── src/
│   └── main.cpp                  <-- Motor de juego con clases y objetos
└── capturas/
    └── combate_consola.png
```

## 👥 Integrantes del grupo

| Nº | Apellido y nombre |
|:--:|-----------------|
| 1 | Alexis Maier |
| 2 | Aramis Demaria |
| 3 | Leon Melgarejo |

## 🎮 Controles del juego

- `W` / `A` / `S` / `D`: mover la nave.
- `ESPACIO`: disparar.
- El jugador tiene 3 vidas; perder las 3 termina la partida.

## 🧩 Clases implementadas

- `Nave` (jugador): atributos privados `x, y, vidas`; métodos públicos
  `getX, getY, getVidas, reducirVida, pintar, borrar, mover`.
- `Asteroide`: enemigo que baja y reaparece.
- `Bala`: proyectil que sube y se destruye al salir o impactar.

## 🛠 Compilación (MinGW / MSYS2, Windows) o OnlineGDB

```powershell
g++ "src/main.cpp" -o "src/juegodenaves.exe"
.\src\juegodenaves.exe
```

## ⚠ REGLA OBLIGATORIA (EVITA EL PLAGIO)

Al iniciar el juego se solicita el "Nombre y Apellido" del piloto, que se
muestra en el HUD y por lo tanto en la captura de pantalla.
