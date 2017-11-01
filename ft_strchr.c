#include "libft.h"

char	*ft_strdup(const char *s);

char *ft_strchr(const char *s, int c)
{
	size_t i;
	char *str;

	i = 0;
	str =  ft_strdup(s);
	while(str[i])
		if(str[i] == c)
			return (&str[i]);
		else
			i++;
	return (NULL);
}
