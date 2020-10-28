#include <stdio.h>

int main (void)
{
  int arr[10];
  for (int i = 0; i <= 9; i++)
  {
    if (i == 4)
    {
      arr[i] = 3;
    }
    else if (i == 5)
    {
      arr[i] = 2;
    }
    else if (i % 2 == 0)
    {
      arr[i] = 0;
    }
    else
    {
      arr[i] = 1;
    }
  }
  int cnt = 0;
  while (cnt < 10)
  {
    printf ("%d", arr[cnt]);
    cnt++;
  }
  return 0;
}