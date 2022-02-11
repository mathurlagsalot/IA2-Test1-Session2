#include<stdio.h>

int input_size()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int is_composite(int n)
{
  for (int i = 2; i <= n/2; i++)
  {
    if (n%i == 0)
      return 1;
  }
  return 0;
}

int sum_composite_numbers(int n, int a[n])
{
  int s = 0;
  for (int i = 0; i < n; i++)
  {
    if (is_composite(a[i]))
    {
      s += a[i];
    }
  }
  return s;
}

void output(int s)
{
  printf("Sum of the given array is: %d", s);
}

int main()
{
  int n = input_size();
  int data[n];
  input_array(n, data);
  int r = sum_composite_numbers(n, data);
  output(r);
  return 0;
}
