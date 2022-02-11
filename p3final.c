#include<stdio.h>

int input_number()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  return n;
}

int is_composite(int n1)
{
  for (int i = 2; i <= n1/2; i++)
  {
    if (n1%i == 0)
      return 1;
  }
  return 0;
}

void output(int n1, int iscomp)
{
  if (iscomp)
    printf("%d is a composite number", n1);
  else 
    printf("%d is not a composite number", n1);
}

int main()
{
  int n = input_number();
  int r = is_composite(n);
  output(n, r);
  return 0;
}
