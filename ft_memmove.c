/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:57:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/07 15:01:14 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char		*des1;
	const char	*src1;
	size_t			i;

	des1 = (char *) dst;
	src1 = (const char *)src;
	i = 0;
	if (!des1 && !src1)
		return (NULL);
	else if (src > dst) 
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len--)
		{
			des1[len] = src1[len];	
		}
	}
		return (des1);
}
/*
#include<stdio.h>
int main()
{
	char go[]="helloworld";
	char gi[]="helloworld";
	printf("%s\n",ft_memmove(&go[0],&go[4],3));
	printf("%s\n",memmove(&gi[0],&gi[4],3));
}
*/