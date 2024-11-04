#ifndef MAIN_H
#define MAIN_H

#define SQR(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PRINTI(w) puts("Control output"); printf(#w " = %d\n", w)
#define PRINTR(w) puts("Result: "); printf(#w " = %f\n", (float)w);

void check(int x, int y, int z, float w, char ch);

#endif //MAIN_H
