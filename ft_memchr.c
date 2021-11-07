/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:23:23 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/04 16:47:14 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ss;
	size_t				i;

	ss = (unsigned char *) s;
	i = 0;
	if (!n || !ss)
		return (0);
	while (i < n)
	{
		if (ss[i] == c)
			return (&ss[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
	char go[]="yhaya";
	int g='h';
	printf("%s",ft_memchr(go,g,3));
}
*/
