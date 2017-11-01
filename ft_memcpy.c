#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;
  char *str;
  char *str2;

  str = (char *)src;
  str2 = (char *)dest;
  i = 0;
  while(i < n)
  {
    str2[i] = str[i];
    i++;
  }
}
