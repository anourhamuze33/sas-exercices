#include <stdio.h>
#include <math.h>
int main(void)
 {
    
 float v, r;
 const float pi = 3.14;
 r=10;

  v = 4.0f/3.0f*pi*pow(r,3);
  printf("the volume of this sphare is %.2f", v);
  return 0;
 }