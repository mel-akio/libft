#include "libft.h"

size_t ft_strlen(const char *s);

char			*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j] && n-- > 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
