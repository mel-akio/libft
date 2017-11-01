#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
  size_t i;
  size_t j;
  size_t m;

  i = 0;
  j = 0;
  m = 0;
  while(haystack[i])
  {
    m = i;
    while(haystack[i] == needle[j])
    {
      i++;
      j++;
      if(needle[j] == '\0')
        return(ft_strdup(&haystack[m]));
      if(haystack[i] != needle[j])
        i--;
    }
    j = 0;
    i++;
  }
}
