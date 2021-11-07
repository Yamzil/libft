/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:49:09 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 21:29:22 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*temp;

	temp = (char *)malloc((len + 1) * sizeof(char));
	while (*(s + i))
	{
		if (len = start)
		{
			*temp = *(start + i);
			i++;
		}
		*temp = '\0';
		return (temp - len);
	}
}

#include<stdio.h>
int main()
{
	char go[] ="amzil";
	printf("%s",ft_substr(go,'a',3));
}
