#include "libft.h"
#include <ctype.h>
#include <unistd.h>

void ft_putchar(unsigned int a,char *c)
{
  write(1, c, 1);
}
int main(void)
{

  //pt = putchar;
  //(*pt)('a');
  ft_striteri("3434",ft_putchar);

   return 0;
}
