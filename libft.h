#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n)
size_t  strlcpy(char * dst, const char * src, size_t dstsize);
size_t  strlcat(char * dst, const char * src, size_t dstsize);
int     toupper(int c);
int     tolower(int c);
char    *ft_strdup(const char *s1);

#endif