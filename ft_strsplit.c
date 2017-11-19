#include "libft.h"

int	count_word(char *str, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c &&  str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
		word++;
	}
	return (word);
}

char **ft_strsplit(char *s, char c)
{
	int i;
	int j;
	int k;
	int l;
	char **str;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	str = ft_memalloc(sizeof(char) * (count_word(s,c) + 1));
	while (s[i])
	{
		while(s[i] == c && s[i])
			i++;
			l = i;
		while(s[i] != c && s[i])
		{
			i++;
			j++;
		}
		if (j)
			str[k++] = ft_strndup(&s[l], j);
		j = 0;
	}
	return (str);
}

int main()
{
	char **str;

	str = ft_strsplit("****i*****",'*');
	printf("%s",str[0]);
	free(str);
}
