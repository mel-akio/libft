#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	i = 0;
	while(i < ft_strlen(s))
	{
		(*f)(&s[i]);
		i++;
	}
	i = 0;
}
