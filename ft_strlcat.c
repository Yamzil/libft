/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:19:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 14:23:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	while (src[i] && size)
	{
		dst[i] = src[i];
		i++;
	}
	return (lensrc + size);
}
/*
#include <stdio.h>
int main()
{
	char go[]="yahya";
	char gi[]="amz";
	printf("%zu\n",ft_strlcat(go,gi,2));
	printf("%zu",strlcat(go,gi,2));
}
*/
