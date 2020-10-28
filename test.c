#include <stdio.h>

int main (void)
{
  int arr[10];
  for (int i = 0; i <= 9; i++)
    {
    arr[i] = 1;
    }
  int cnt = 0;
  while (cnt < 10)
    {
    printf ("%d", arr[cnt]);
    cnt++;
    }
  return 0;
}