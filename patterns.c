#include "patterns.h"
#include "cube.h"

static Rotation SUPERFLIP_ARRAY[]
    = { m, u, m, u, m, u, m, u, X, Y, m, u, m, u, m,
        u, m, u, X, Y, m, u, m, u, m, u, m, u, X, Y };
pattern SUPERFLIP
    = { .pattern = SUPERFLIP_ARRAY, .size = 30, .name = "Superflip" };

static Rotation CHECKERBOARD_ARRAY[] = { m, m, e, e, s, s };
pattern CHECKERBOARD
    = { .pattern = CHECKERBOARD_ARRAY, .size = 6, .name = "Checkerboard" };
