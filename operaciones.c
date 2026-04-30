#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
//la funcion multiplicar recibe dos numeros enteros y devuelve el resultado de multiplicarlos.

int multiplicar(int a, int b) {
    return a * b;
}         //Calcula el producto entre 2 enteros usando el operador *

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /*version main*/
}


