#include "functions.h"

bool even_odd(int num)
{
  return num%2;
}

int add(int a, int b)
{
  return a+b;
}

int subtract(int a, int b)
{
  return a-b;
}

int multiply(int a, int b)
{
  return a*b;
}

float divide(int a, int b)
{
  return float(a)/float(b);
}

void swap(int &a, int &b)
{
  b = b-a; // 3-2 = 1
  a = a+b; // 2+1 = 3
  b = a-b; // 3-1 = 2
}

int largestNumber(int a, int b, int c)
{
  if (a>b && b>c)
    return a;
  if (b>a && a>c)
    return b;
  if (c>a && a>b)
    return c;
}
