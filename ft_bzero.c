/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:03:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/19 23:34:04 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;
	int				i;

	ss = (unsigned char *) s;
	i = 0;
	while (n--)
	{
		ss[i] = 0;
		i++;
	}
}
/*
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
*/
