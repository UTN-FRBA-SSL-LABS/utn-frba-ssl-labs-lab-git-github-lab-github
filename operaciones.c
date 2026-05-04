#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    /* Suma dos numeros y devuelve el resultado */
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    /* Resta dos enteros y devuelve el resultado */
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    // Multiplica dos enteros usando el operador *
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
