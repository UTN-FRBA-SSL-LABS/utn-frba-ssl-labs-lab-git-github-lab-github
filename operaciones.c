#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a,const  int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
}

/* ── esPar Te dice si es o no par────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
