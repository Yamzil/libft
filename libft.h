/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:58:45 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/04 12:45:46 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char * restrict dst, const char *restrict src, size_t size);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *b, int c, size_t len);
char	*strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_calloc(size_t count, size_t size);
char *ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_atoi(const char *str);


#endif
