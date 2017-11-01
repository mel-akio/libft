#include "libft.h"

char	*ft_strdup(const char *s);
size_t	*ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *str;

	str =  ft_strdup(s);
	i = strlen(str);
	while(i > 0)
		if(str[i] == c)
			return (&str[i]);
		else
			i--;
	return (NULL);
}
