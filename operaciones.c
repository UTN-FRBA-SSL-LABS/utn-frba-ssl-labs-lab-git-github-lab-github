#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;  //Realiza la suma entre a y b
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    return a * b; //Agregue el operador * para poder realizar la multiplicación a*b
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
