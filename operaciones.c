#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*sirve para calcular el producto de dos números (enteros o flotantes) a * b */
int multiplicar(int a, int b)
{
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n)
{
    return (n % 2) == 0;
}
