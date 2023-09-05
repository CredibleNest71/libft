#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h> 
#include <unistd.h> 
#include <string.h>
#include <stdio.h>

void    		ft_bzero(void *s, unsigned int n);
int 			ft_isalpha(int c);
int 			ft_isascii(int c);
int 			ft_isdigit(int c);
int 			ft_isalnum(int c);
int 			ft_isprint(int c);
void    		*ft_memcpy(void *dest, const void *src, size_t n);
void 			*ft_memset(void *s, int c, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int	ft_toupper	(int c);
int	ft_tolower	(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
#endif
