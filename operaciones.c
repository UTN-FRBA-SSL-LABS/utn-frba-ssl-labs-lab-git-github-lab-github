#include "operaciones.h"

/* ── sumar — ya implementada ───────────────────────── */
/**
 * Suma dos enteros y devuelve el resultado.
 * Se usa const en los parámetros para indicar que no se modifican dentro de la función.
 */
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */
/**
 * Resta dos enteros y devuelve el resultado.
 */
int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/**
 * Multiplica dos enteros y devuelve el resultado.
 */
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
/**
 * Determina si un número entero es par.
 * Retorna 1 si es par, 0 si es impar.
 */
int esPar(int n) {
    return (n % 2) == 0;
}
