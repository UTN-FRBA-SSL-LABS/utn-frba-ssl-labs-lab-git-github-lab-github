#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) { /*lo cambio para que no se puedan modificar los valores adentro de la funcion*/
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* Multiplica dos enteros usando el operador * */
int multiplicar(const int a,const int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}
