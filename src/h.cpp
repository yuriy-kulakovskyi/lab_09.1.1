#include <stdio.h>
#include "../include/main.h"

void check(int x, int y, int z, float w, char ch) {
  do {
    puts("Input values for x, y, z:");
    scanf("%d", &x);
    PRINTI(x);
    scanf("%d", &y);
    PRINTI(y);
    scanf("%d", &z);
    PRINTI(z);

    if (z > 5)
      w = SQR(MAX(x * CUBE(y), x + z));

    else
      w = MIN(x - y * z, x * y + z);

    PRINTR(w);

    puts("Repeat? y/n ");
    scanf(" %c", &ch);
  } while (ch == 'y');
}