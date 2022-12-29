#include<stdio.h>

struct 
{
 char *engine;
} car1,car2;

int main()
{
    car1.engine = "DDis 190 engine";
    car2.engine = "1.2 L Kappa dual VTVT";
    printf("%s\n", car1.engine);
    printf("%s", car2.engine);
    return 0;
}
