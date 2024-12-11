#ifndef __TIPEDEFS_H__
#define __TIPEDEFS_H__

#include <stdlib.h>

typedef struct
{
    int down;
    int up;
    int left;
    int right;
} control_buttons;

enum Direction
{
    UP = 0,
    RIGHT = 1,
    LEFT = 2,
    DOWN = 3
};

typedef struct
{
    int x;
    int y;
} tail_t;

#endif /* __TIPEDEFS_H__ */