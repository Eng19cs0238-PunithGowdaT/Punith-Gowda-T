//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int
main ()
{
  float h, b, d, vol;
  printf ("Enter height,breadth,depth:");
  scanf ("%f%f%f", &h, &b, &d);
  vol = ((h * b * d) + (d / b)) / 3;
  printf ("Volume=%f", vol);
  return 0;
}
