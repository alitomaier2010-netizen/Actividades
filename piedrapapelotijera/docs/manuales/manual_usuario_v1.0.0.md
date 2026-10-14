# Manual del Usuario — v1.0.0

**Proyecto:** Actividad 7 — Mini Juego Piedra, Papel o Tijera + Persistencia

## 1. Requisitos

- Windows con consola o OnlineGDB (Linux).

## 2. Uso

1. Compilar y ejecutar.
2. En el menú elegir:
   - `1` Jugar Partida: ingresar nombre/nickname y elegir 1 (Piedra), 2 (Papel), 3 (Tijera).
   - `2` Ver historial guardado en disco.
   - `3` Salir.

## 3. Persistencia

Al jugar, la partida se guarda en `src/historial_partidas.txt`. Al cerrar y
volver a abrir el programa, la opción 2 recupera el historial completo.

## 4. Troubleshooting

- Si se saltea el nombre, falta `cin.ignore()` antes de `getline()`.
- Si no se crea el archivo, jugar al menos una partida primero.
- Error de permisos en el laboratorio: usar OnlineGDB y descargar archivos.
