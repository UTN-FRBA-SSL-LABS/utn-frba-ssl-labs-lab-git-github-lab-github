#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

// Esta funcion se encarga de sumar el valor de las variables a y b en una sola linea
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — multiplica a por b y devuelve el resultado ─────────────────────── */
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}