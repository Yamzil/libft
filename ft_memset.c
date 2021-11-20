/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:54:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 00:07:16 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *) b;
	while (len)
	{
		*a = (unsigned char) c;
		a++;
		len--;
	}
	return (b);
}
/*
#include<stdio.h>
int main()
{
	char str[20] = "amzil";
	int i = 'y';
	printf("%s\n",ft_memset(str,i,1));
	printf("%s",memset(str,i,1));
}
*/
