#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *s)
{
	char *str;

	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	ft_strcpy(str, s);
	return(str);
}
