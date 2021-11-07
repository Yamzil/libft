/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:57:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 13:11:40 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*des1;
	const char	*src1;

	des1 = (char *) dst;
	src1 = (const char *) src;
	while (len)
	{
		*(des1 + len) = *(src1 + len);
		len--;
	}
	return (des1);
}
/*
#include<stdio.h>
int main()
{
	char go[]="oldstring";
	char gi[]="newstring";
	printf("%s\n",ft_memmove(go,gi,9));
	memmove(go.gi,9);
}
*/
