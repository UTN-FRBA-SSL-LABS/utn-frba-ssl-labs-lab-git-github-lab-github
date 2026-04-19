#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, const int b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Funcion multiplicar recibe dos enteros y retorna la multiplicacion de los mismos.
// Te cambio el comentario Gon: Multiplicar recibe dos enteros que son (a) y (b), los cuales despues multiplica y retorna el resultado
int multiplicar(int a, int b)
{
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n)
{
    return (n % 2) == 0;
}
