#include<stdio.h>
int main ()
{
  printf("%d\n", 4>3 && 5<6); // if both operation is right so the answer will be 1
  printf("%d\n", 3>2 || 4<3); // if any one operaton is right so the answer will be 1
  printf("%d", ! 3==4); // give opposite answer
  return 0;
}