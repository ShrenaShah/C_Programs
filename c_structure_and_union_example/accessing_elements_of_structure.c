#include<stdio.h>
struct car
{
    int fuel_tank_cap;
} c1,c2;

int main()
{
    c1.fuel_tank_cap = 32;
    c2.fuel_tank_cap = 37;
    printf("fuel tank capacity of c1 = %d\n",c1.fuel_tank_cap);
    printf("fuel tank capacity of c2 = %d",c2.fuel_tank_cap);
    return 0;
}