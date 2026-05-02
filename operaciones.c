#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) { //Se agrega const a las variables que no se modifican
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
//esta funcion multiplica dos enteros
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
