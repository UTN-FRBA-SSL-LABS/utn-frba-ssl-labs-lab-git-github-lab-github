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

// multiplicar dos números enteros a y b, y devolver su producto
int multiplicar(int a, int b)
{
    return a * b;
};

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n)
{
    return (n % 2) == 0;
}
