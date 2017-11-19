#include "libft.h"
void ft_putchar(char c);

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;
	if(s != NULL && f != NULL)
		while(*s != strlen(s))
		{
			(*f)(i,s);
			i++;
			s++;
		}
}
