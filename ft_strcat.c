#include "libft.h"

size_t ft_strlen(const char *s);

char		*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
