#include "operaciones.h"
/*Usar const para los parámetros en C es una práctica recomendada y excelente. 
Indica que la función no modificará el valor del argumento, convirtiéndolo en "solo lectura". 
Esto mejora la seguridad, previene errores accidentales, documenta la intención del código y ayuda al compilador a optimizar.
 */
/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* Multiplicar recibe 2 numeros enteros y los multiplica utilizando el operador "*" luego retorna el resultado */
int multiplicar(const int a, const int b) {
return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
