#ifndef SILNIK_H
#define SILNIK_H

#include <stdlib.h>
#include <time.h>

#define LOSOWY_SEED (time(NULL))

void inicjuj_losowanie(int seed);
int losuj();

#endif
