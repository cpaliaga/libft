#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Funciones Reeditadas */
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n)
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t  ft_strlcat(char * dst, const char * src, size_t dstsize);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strdup(const char *s1);

/* Funciones Custom */
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif