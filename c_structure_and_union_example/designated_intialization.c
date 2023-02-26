#include<stdio.h>
struct abc
{
    int x;
    int y;
    int z;
};

int main()
{
    struct abc a = {.x = 1, .y = 2, .z = 3};
    printf("%d %d %d", a.x, a.y, a.z);
    return 0;
}