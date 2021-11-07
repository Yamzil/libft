/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:53:15 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 12:39:37 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s11;
	const char	*s22;

	i = 0;
	s11 = (const char *)s1;
	s22 = (const char *)s2;
	while (s11[i] && s22[i] && s11[i] == s22[i] && n)
	{
		i++;
	}
	return (s11[i] - s22[i]);
}

#include<stdio.h>
int main()
{
	char go[]="yahya";
	char gi[]="amw";
	printf("%d\n",ft_memcmp(go,gi,0));
	printf("%d",memcmp(go,gi,0));
}

