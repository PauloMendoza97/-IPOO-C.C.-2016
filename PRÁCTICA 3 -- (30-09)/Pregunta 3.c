#include <stdio.h>
#include <math.h>

struct punto{
    int x;
    int y;
};

int distancia(struct punto a,struct punto b)
{
    int distancia;
    return distancia=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

int main()
{
    struct punto point_a;
    struct punto point_b;

    int l;
    point_a.x=10;
    point_a.y=12;
    point_b.x=13;
    point_b.y=16;

    l=distancia(point_a,point_b);
    printf("Distancia entre los puntos: %d\n",l);
}
