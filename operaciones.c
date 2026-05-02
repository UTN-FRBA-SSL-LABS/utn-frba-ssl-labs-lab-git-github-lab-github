#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) { 
    /*La funcion sumar recibe dos parametros y retorna la suma entre a y b*/
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*La funcion multiplicar recibe dos parametros y retorna el producto entre a y b */
int multiplicar(const int a, const int b) {
    return a * b; /* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}
