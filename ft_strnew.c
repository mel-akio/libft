#include "libft.h"

char * ft_strnew(size_t size)
{
  char *str;

  str = malloc(sizeof(char) * size + 1);
  ft_bzero(str,size);
  return(str);
}
