#include<stdio.h>
typedef struct
{
  int n;
  int d;

} Fraction;

int
simplified (int x, int y)
{
    if (y != 0)
        return simplified(y, x % y);
    else
        return x;
};

Fraction
sum (Fraction f1, Fraction f2)
{
  Fraction c;
  int x, y;
  x = (f1.n * f2.d) + (f2.n * f1.d);
  y = (f1.d * f2.d);
  printf("%d",simplified(x,y));
  c.n = x / simplified (x, y);
  c.d = y / simplified (x, y);
  return c;
}



Fraction
input (int a)
{
  Fraction c;
  printf ("Enter fraction %d: numerator and denominator:", a);
  scanf ("%d%d", &c.n, &c.d);
  return c;
};

void
display (Fraction f1, Fraction f2, Fraction r)
{
  printf ("Result of %d/%d + %d/%d = %d/%d", f1.n, f1.d, f2.n, f2.d,r.n, r.d);
}

int
main ()
{
  Fraction f1 = input (1);
  Fraction f2 = input (2);
  Fraction r = sum (f1, f2);
  display (f1, f2, r);
  return 0;
}
