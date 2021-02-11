//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordinates {
    int x, y;
};

double getDistance(struct coordinates a, struct coordinates b)
{
    double d;
    d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return d;
}

int main()
{
    double d;
    struct coordinates a, b;
    printf("Enter coordinate of point a: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%d %d", &b.x, &b.y);
    d=getDistance(a, b);
    printf("Distance between a and b: %lf\n", d);
    return 0;
}
