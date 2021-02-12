//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
void main(){
int n,s=0;
printf("Enter the number of integers you wish to add:");
scanf("%d",&n);
int a[n];
 for(int i=0;i<n;i++)
{
printf("Enter the %d integer:",i+1);
scanf("%d",&a[i]);
s=s+a[i];
}
printf("sum of %d integers is %d",n,s);
}
