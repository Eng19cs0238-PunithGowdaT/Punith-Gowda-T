//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int n1,n2,Sum;

int  num1(int n1){
printf(“Enter one number”); 
scanf(“%d”,&n1);
return  n1;
}
int  num2(int n2){
printf(“Enter another number”);
scanf(“%d”,&n2);
return  n1;
}
int sum(n1,n2)
{
return n1+n2;
}
void print(){
printf(“SUM of %d and %d =%d”,n1,n2,Sum);
}
int main()
{
num1();
num2();
Sum=sum(n1,n2);
print();
}
