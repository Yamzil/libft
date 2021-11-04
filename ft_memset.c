/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:54:51 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/03 17:01:16 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (unsigned char *) b;
	while (len)
	{
		*a = c;
		a++;
		len--;
	}
	return (b);
}
/*
#include<stdio.h>
int main()
{
	char str[20] = "Yahya";
	int i = 'k';
	printf("%s\n",ft_memset(str,i,2));
	printf("%s",memset(str,i,2));
}
*/
