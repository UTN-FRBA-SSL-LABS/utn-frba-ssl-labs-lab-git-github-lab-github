#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* Esta función recibe dos enteros y devuelve su producto*/
int multiplicar(const int a, const int b)
{
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n)
{
    return (n % 2) == 0;
}
