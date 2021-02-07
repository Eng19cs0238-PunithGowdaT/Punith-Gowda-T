//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
    float volume(float h,float b,float d)
    {
       return ((h*b*d)+(d/b))/3;
     }
     float getdata()
     {
          float h,b,d,vol;
        printf("Enter the h,b & d:");
        scanf("%f%f%f",&h,&b,&d);
         vol=volume(h,b,d);
        return vol;
     }
     float displaydata(){
         float vol;
         vol=getdata();
        printf("Volume of the tromboloid is :%2f",vol);
     }
     int main()
     {
       displaydata();
     }
