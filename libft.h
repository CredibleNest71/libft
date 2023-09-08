/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:07:50 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 16:52:33 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h> 
# include <unistd.h> 
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

void			ft_bzero(void *s, size_t n);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *destination, const void *source, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char            *ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strlen(const char *str);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char            *ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void            ft_putendl_fd(char *s, int fd);
#endif
