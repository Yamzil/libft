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

#include<string.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char		*des1;
	const char	*src1;
	size_t			i;


	des1 = (char *) dst;
	src1 = (const char *)src;
	i = 0;
	if (des1 == NULL && src1 == NULL)
		return (0);
	else if (src > dst) {
		while (len)
		{
			des1[i] = src1[i];
			i++;
			len--;
		}
	}
	else{
		i = len - 1;
		while (len)
		{
			des1[i] = src1[i];
			len--;
			i--;	
		}
	}
		return (des1);
}
/*
#include<stdio.h>
int main()
{
	char go[6]="hello";
	char gi[6]="hello";
	//printf("%s\n",ft_memmove(go,gi,3));
	memmove(go.gi,9);
}
*/
