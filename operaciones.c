#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
//La funcion sumar toma dos enteros constantes como argumentos y devuelve su suma
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// Multiplica dos numeros y devuelve el resultado de la multiplicacion.
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
