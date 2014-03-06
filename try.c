#include <stdio.h>

int i;

int increment() {
  return ++i;
}

int main() {
  i = 1;
  do {
  } while (increment() <= 5);

  printf("%d", i);

  return 1;
}
