#ifndef __LIBFT_H__
  #define __LIBFT_H__
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *s,int c, size_t n);
void *ft_bzero(void *s,size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
size_t	 ft_strlen(const char *s);
int ft_atoi(const char *nptr);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void * ft_memalloc(size_t size);
void ft_memdel(void **ap);
char * ft_strnew(size_t size);
void ft_strdel(char **as);

#endif
