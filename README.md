# Generala 

Trabajo práctico integrador de **Programación I** (Tecnicatura Universitaria en Programación, UTN, 2025). Hecho en grupo.

Es el juego de la Generala por consola, en C++ con Code::Blocks.

## Qué hace
- Se puede jugar solo o de a dos.
- Cada partida tiene 10 rondas, con hasta 3 tiros por ronda. En cada tiro elegís qué dados volver a tirar.
- Calcula el puntaje: juego de 1 al 6, escalera, full, póker y generala.
- Si sacás generala en el primer tiro (generala servida), te llevás 250 puntos de premio. Jugando solo, además termina la partida.
- Muestra el puntaje más alto y los créditos.

## Qué practicamos
Condicionales, ciclos, funciones, vectores y separar el código en archivos `.h` y `.cpp`. Los dados salen al azar con `rand()` y `srand()`.

## Cómo probarlo
Abrir `GENERALA.cbp` con Code::Blocks. Funciona en Windows.

## Equipo
Juan Ciuffo, Matías Monzón y Flavia Melgarejo.

Para los colores y el dibujo de los dados usamos la librería [rlutil](https://github.com/tapio/rlutil).
