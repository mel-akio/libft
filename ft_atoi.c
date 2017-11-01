#include "libft.h"

int ft_atoi(const char *nptr)
{
  size_t i;
  char neg;
  int result;

  i = 0;
  neg = 0;
  result = 0;
    while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == 32)
      i++;
    if(nptr[i] == '+' || nptr[i] == '-')
      if(nptr[i++] == '-')
        neg = 1;
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
      result *= 10;
      result += nptr[i++] - '0';
    }
    if(neg)
      result *= -1;
    return (result);
}
