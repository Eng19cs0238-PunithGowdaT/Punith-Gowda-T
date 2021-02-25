//Write a program to add two user input numbers using one function.
#include<stdio.h>

int sum(int a,int b)
{
return a+b;
}

int main()
{
  
int a,b,s;
printf(“Enter number 1\n”);
scanf(“%d”,&a);
printf(“Enter number 2\n”);
scanf(“%d”,&b);
s=sum(a,b);
printf(“SUM of %d and %d is %d\n”,a,b,sum);
return 0;
}
