/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:51:20 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 12:59:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*des1;
	const char	*src1;
	int			i;

	des1 = (char *) dest;
	src1 = (const char *)src;
	i = 0;
	while (n)
	{
		*des1 = *src1;
		des1++;
		src1++;
		n--;
		i++;
	}
	return (des1 - i);
}
/*
#include<stdio.h>
int main()
{
	char go[]="yahya";
	char gi[]="amz";
	printf("%s\n",ft_memcpy(go,gi,3));
	printf("%s",memcpy(go,gi,3));
}
*/
