#include<stdio.h>

int input_side()
{
  int a;
  printf("Enter a side of the triangle: ");
  scanf("%d", &a);
  return a;
}

int check_scalene(int a, int b, int c)
{
  int isscalene = 0;
  if (a != b && b != c && a != c)
  {
    printf("%d", isscalene);
  }

  else
  {
    isscalene = 1 ;
    printf("%d", isscalene);
  }
  printf("%d", isscalene);
  return isscalene;
}

void output()
{
  int isscalene;
  if (isscalene == 0)
  {
    printf("The triangle is scalene");
  }
  else
  {
    printf("The triangle is not scalene");
  }
}

int main()
{
  int a, b, c, isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  check_scalene(a, b, c);
  output(isscalene);
  return 0;
}