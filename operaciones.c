#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

const int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

const int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

const int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

const int esPar(int n) {
    return (n % 2) == 0;
}
