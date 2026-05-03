#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
} //sumar dos valores y devuelve su suma mediante el operador +. toma un valor a y un valor b, y devuelve su suma. 

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
} //restar dos valores y devuelve su diferencia mediante el operador -. toma un valor a y un valor b, y devuelve su resta. 

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// multiplicar recibe dos valores y devuelve su producto mediante el operador *. toma un valor a y un valor b, y devuelve su multiplicacion. 
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
