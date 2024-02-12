#include <stdio.h>

typedef struct abc {
  int x : 10;
} abc;

int main() {
  struct abc instance;
  printf("testing %d", instance.x);
}
