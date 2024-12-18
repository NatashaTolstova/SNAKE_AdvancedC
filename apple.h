#ifndef __APPLE_H__
#define __APPLE_H__

#include "typedefs.h"
#include "settings.h"
#include "snake.h"

typedef struct
{
    int x;
    int y;
    int weigt;
} apple_t;

apple_t initApple(int x, int y, int weigt);
void printApple(apple_t *apple, char matrix[][MAX_Y]);
void generateNewApple(snake_t *snake, apple_t *apple);

#endif /* __APPLE_H__ */