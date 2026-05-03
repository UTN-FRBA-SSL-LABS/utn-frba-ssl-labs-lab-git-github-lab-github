#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int incrementar(const int a,const  int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*La funcion recibe dos valores y devuelve el resultado de la multiplicacion entre ellos*/
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
