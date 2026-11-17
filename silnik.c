#include "silnik.h"

void inicjuj_losowanie(int seed) {
  srand(seed);
}

int losuj() {
  return rand() % 10000;
}
