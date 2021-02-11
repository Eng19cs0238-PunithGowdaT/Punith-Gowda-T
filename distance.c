//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>


float calculateDistance(float x1,float y1, float x2,float y2)
{
return sqrt(((x2-x1)(x2-x1))+((y2-y1)(y2-y1)));
}

float getcordinates()
{
float x2,x1,y2,y1,d;
printf("Enter the x coordinate of point one: ");
scanf("%f",&x1);
printf("Enter the y coordinate of point one: ");
scanf("%f",&y1);
printf("Enter the x coordinate of point two: ");
scanf("%f",&x2);
printf("Enter the y coordinate of point two: ");
scanf("%f",&y2);
d=calculateDistance(x1,y1,x2,y2);
return d;
}


int displaydistance(float d)
{
    printf("Distance between the points = %f ",d);
return 0;
}

int main()
{
float d;
d=getcordinates();
displaydistance(d);
}
