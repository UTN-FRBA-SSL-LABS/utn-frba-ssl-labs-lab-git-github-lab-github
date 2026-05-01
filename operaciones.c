#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const a, const b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/*Ahora utilizamos el asterisco para que se haga el calculo*/
/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(const a, const b) {
    return a * b;   // Notar que puse un * !!!
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
