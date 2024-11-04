#include <stdio.h>
#include "../include/main.h"

#define PRINTI(w) puts("Control output"); printf(#w " = %d\n", w)
#define PRINTR(w) puts("Result: "); printf(#w " = %f\n", (float)w)

int main() {
  int x, y, z;
  float w;
  char ch;

  puts("Program to calculate expression based on conditions");

  do {
    puts("Input values for x, y, z:");
    scanf("%d", &x);
    PRINTI(x);
    scanf("%d", &y);
    PRINTI(y);
    scanf("%d", &z);
    PRINTI(z);

    if (z > 5) {
      w = SQR(MAX(x * CUBE(y), x + z));
    } else {
      w = MIN(x - y * z, x * y + z);
    }

    PRINTR(w);

    puts("Repeat? y/n ");
    scanf(" %c", &ch);
  } while (ch == 'y');

  return 0;
}