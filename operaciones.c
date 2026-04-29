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
//la funcion multiplicar recibe dos numeros enteros y devuelve el resultado de multiplicarlos.
const int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

const int esPar(int n) {
    return (n % 2) == 0;
}

c
int dividir(int a, int b) {
    return a - b; /* bug intencional */
}