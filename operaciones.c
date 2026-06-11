#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── *
/*  Multiplica dos números enteros de tipo "int" usando el operador * y devuelve el resultado */
int multiplicar(int a, int b) {
    return a*b; /* aca devuelvo el valor de la multiplicacion de los dos enteros */
}
/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
/* -------------division------------------------------------------------------- */
int dividir(int a, int b) {
    return a - b; /* bug intencional */
}

