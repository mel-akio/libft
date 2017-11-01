#include "libft.h"

char	*ft_strndup(const char *s, size_t n);

char *ft_strnstr(char *haystack, const char *needle, size_t n)
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
        return(ft_strndup(&haystack[m],n));
      if(haystack[i] != needle[j])
        i--;
    }
    j = 0;
    i++;
  }
}
