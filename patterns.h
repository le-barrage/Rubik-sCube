#include "cube.h"
#include <stdlib.h>
#ifndef PATTERN_H

typedef struct pattern {
  Rotation *pattern;
  size_t size;
  char *name;
} pattern;

extern pattern SUPERFLIP, CHECKERBOARD;

#endif // !PATTERN_H
