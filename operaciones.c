#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
} //sumar dos valores y devuelve su suma mediante el operador +. a partir de un valor a y b devuelve la suma de ambos

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
} //restar dos valores y devuelve su diferencia mediante el operador -. a partir de un valor a y b devuelve la resta de ambos

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// muiltiplicar recibe dos valores y devuelve su producto meidante el operador *. a partir de un valor a y b devuelve la multiplicacion de ambos
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
