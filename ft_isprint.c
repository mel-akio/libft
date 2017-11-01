#include "libft.h"

int ft_isprint(int c)
{
  if(c >= 0 && c <= 31 || c > 126)
    return(0);
  return(16384);
}
