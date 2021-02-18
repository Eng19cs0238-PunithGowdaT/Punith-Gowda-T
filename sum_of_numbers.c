//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int
getelement ()
{
  int n;
  printf ("Enter the number of integers you wish to add:");
  scanf ("%d", &n);
  return n;
}

int addsum(int n){
     int a[n];
    int s=0;
     for (int i = 0; i < n; i++)
    {
      printf ("Enter the %d integer:", i + 1);
      scanf ("%d", &a[i]);
      s = s + a[i];
    }
    return s;
}

void display(int n,int s){
    
  printf ("sum of %d integers are %d", n, s);
}

void main()
{
  int n, s;
    n = getelement ();
    s=addsum(n);
    display(n,s);
 
}
