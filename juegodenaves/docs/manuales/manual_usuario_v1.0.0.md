# Manual del Usuario — v1.0.0

**Proyecto:** Actividad 8 — Juego de Naves en Consola (POO)

## 1. Requisitos

- Windows (usa `windows.h` y `conio.h`). Para laboratorio puede usarse OnlineGDB.

## 2. Controles

- `W` arriba, `A` izquierda, `S` abajo, `D` derecha.
- `ESPACIO`: disparar.
- El jugador tiene 3 vidas; la pérdida total termina la partida.

## 3. Pantalla

- HUD superior: nombre del piloto y vidas restantes.
- Asteroides bajan; las balas suben. Impacto de asteroide reduce 1 vida.
- Disparar destruye asteroides.

## 4. Troubleshooting

- Si la ventana parpadea, ajustar `Sleep(30)` en el bucle.
- Si el bloqueo de mayúsculas bloquea las teclas, `tolower` ya lo evita.
- Sin permisos en el laboratorio: usar OnlineGDB y descargar evidencias.
