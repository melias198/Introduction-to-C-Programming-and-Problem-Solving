#include <stdio.h>

int main()
{
  long long int n, arra[200010], i, x;
  scanf("%lld", &n);

  for (i = 1; i < n; i++)
  {
    scanf("%lld", &x);
    arra[x] = 1;
  }
  for (i = 1; i <= n; i++)
  {
    if (arra[i] == 0)
    {
      printf("%lld", i);
      break;
    }
  }

  return 0;
}