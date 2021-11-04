/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:03:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/04 11:17:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char	*ss;

	i = 0;
	ss = (char *) s;
	while (n)
	{
		*ss = '\0';
		ss++;
		n--;
	}
}
/*
#include<stdio.h>
int main()
{
	char go[] = "ayahy";
	ft_bzero(go,2);
	printf("%c",go[0]);
	printf("%c",go[1]);
	printf("%c",go[3]);
}*/
