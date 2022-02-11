#include<stdio.h>

void input(float *a, float *b)
{
  printf("Enter a base: ");
  scanf("%f", a);
  printf("Enter a height: ");
  scanf("%f", b);
}

void find_area(float a, float b, float *area)
{
  *area = (a * b)/2;
}

void output(float a, float b, float area)
{
  printf("area of triangle with base %f and height %f is %f", a, b, area);
}

int main()
{
  float a, b, area;
  input(&a, &b);
  find_area(a, b, &area);
  output(a, b, area);
  return 0;
}