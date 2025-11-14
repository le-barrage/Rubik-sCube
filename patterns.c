#include "patterns.h"
#include "cube.h"

static Rotation SUPERFLIP_ARRAY[]
    = { m, u, m, u, m, u, m, u, X, Y, m, u, m, u, m,
        u, m, u, X, Y, m, u, m, u, m, u, m, u, X, Y };

static Rotation CHECKERBOARD_ARRAY[] = { m, m, e, e, s, s };

static Rotation CROSS_ARRAY[]
    = { R, R, l, D, F, F, r, d, r, L, u, D, R, D, B, B, r, U, D, D };

static Rotation FOUR_CROSSES_ARRAY[]
    = { U, U, R, R, L, L, F, F, B, B, D, D, L, L, R, R, F, F, B, B };

static Rotation CUBE_IN_CUBE_ARRAY[]
    = { F, L, F, u, R, U, F, F, L, L, u, l, B, d, b, L, L, U };

static Rotation CUBE_IN_CUBE_IN_CUBE_ARRAY[]
    = { u, l, u, f, R, R, b, R, F, U, B, B, U, b, L, u, F, U, R, f };

static Rotation FOUR_SPOTS_ARRAY[]
    = { F, F, B, B, U, d, R, R, L, L, U, d };

static Rotation SIX_SPOTS_ARRAY[]
    = { U, d, R, l, F, b, U, d };

pattern patterns[] = {
  { .pattern = SUPERFLIP_ARRAY, .size = 30, .name = "Superflip" },
  { .pattern = CHECKERBOARD_ARRAY, .size = 6, .name = "Checkerboard" },
  { .pattern = CROSS_ARRAY, .size = 20, .name = "Cross" },
  { .pattern = FOUR_CROSSES_ARRAY, .size = 20, .name = "4 Crosses" },
  { .pattern = CUBE_IN_CUBE_ARRAY, .size = 18, .name = "Cube in a cube" },
  { .pattern = CUBE_IN_CUBE_IN_CUBE_ARRAY, .size = 20, .name = "Cube in a cube in a cube" },
  { .pattern = FOUR_SPOTS_ARRAY, .size = 12, .name = "Four spots" },
  { .pattern = SIX_SPOTS_ARRAY, .size = 8, .name = "Six spots" }
};

const int PATTERNS_COUNT = sizeof (patterns) / sizeof (pattern);
