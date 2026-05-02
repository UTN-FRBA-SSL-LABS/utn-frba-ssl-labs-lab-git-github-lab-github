#include "operaciones.h"

/* ── sumar: indica la suma de dos números ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar: indica la diferencia de dos números ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar: indica el producto de dos números ─────────────────────── */

int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
}

/* ── esPar: indica si un número es par a partir de que si el resto de dividir por 2 es cero ────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}