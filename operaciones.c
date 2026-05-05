#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

const int sumar( int a,  int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

const int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* explicacion de multiplicar */
int multiplicar(const int a, const int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}
