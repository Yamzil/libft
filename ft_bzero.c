/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:03:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 11:39:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *) s;
	while (n)
	{
		*ss = 0;
		ss++;
		n--;
	}
}

#include<stdio.h>
int main()
{
	int go[] = {4, 3, 2, 1};
	int i;

	i = 0;
	ft_bzero(go,2);
	while (go[i] != '\0')
	{
		printf("%d, ", go[i]);
		i++;
	}
	printf("%c",go[0]);
	printf("%c",go[1]);
	printf("%c",go[3]);
}

