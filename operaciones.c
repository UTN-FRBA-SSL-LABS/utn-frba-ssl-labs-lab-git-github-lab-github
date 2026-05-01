#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
/* Al agregar las variables constantes son inmodificable en tiempo de ejecucion dando mas seguiadad al sistema*/
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*esta funcion multiplica dos numeros enteros*/
int multiplicar(int a, int b) {
    return a * b; /* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
