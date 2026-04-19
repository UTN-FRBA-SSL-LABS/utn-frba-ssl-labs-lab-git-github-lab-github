#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a,const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/*lo que hace esta función es multiplicar dos números enteros guardados en a y b, cuando se le solicita e invoca la función multiplicar*/
/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
