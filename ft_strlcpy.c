/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:01:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 14:29:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	while (size)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include<stdio.h>
int main()
{
	char go[] = "yahya";
	char gi[] = "qwertyuiop";
	printf("%zu\n",ft_strlcpy(go,gi,4));
	printf("%lu",strlcpy(go,gi,4));
}
*/
