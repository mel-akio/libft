#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	while (src[i] && j++ < n)
		dest[i] = src[i++];
	dest[i] = '\0';
	while (j++ < n)
		dest[i] = '\0';
	return dest;
}
