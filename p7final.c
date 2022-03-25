#include <stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf ("Enter base and altitude of triangle \n");
  scanf ("%f%f", &t.base, &t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("Triangle with base and altitude %f,%f of area is of %f \n",t.base,t.altitude,t.area);
}