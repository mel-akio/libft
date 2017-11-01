#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strndup(const char *s, size_t n)
{
	char *str;

	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	ft_strncpy(str, s, n);
	return(str);
}
