//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int
getelement ()
{
  int n;
  scanf ("%d", &n);
  return n;
}

void
getN (int n, int a[n])
{
  for (int i = 0; i < n; i++)
    {
      a[i] = getelement ();
    }
}

int
addsum (int n, int a[n])
{
  int s=0;
  for (int i = 0; i < n; i++)
    {
      s = s + a[i];
    }
  return s;
}

void
display (int n, int s)
{

  printf ("sum of %d integers is %d", n, s);
}

void
main ()
{
  int n, sum;
  n = getelement ();
  int s[n];
  getN (n, s);
  sum = addsum (n, s);
  display (n, sum);

}
