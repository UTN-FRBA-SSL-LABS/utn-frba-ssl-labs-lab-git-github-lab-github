#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

// suma dos constantes numericas y retorna el resultado
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// Multiplica dos numeros enteros y retorna su resultado
int multiplicar(int a, int b) {
    return a*b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
