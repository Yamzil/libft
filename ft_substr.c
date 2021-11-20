/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:49:09 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 02:49:00 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen (&s[start]) < len)
		temp = malloc (ft_strlen(&s[start] + 1) * sizeof(char));
	else
		temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	while (len > i && s[i + start])
	{
		temp[i] = s[i + start];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/*
#include<stdio.h>
 int main()
 {
	char go[] ="hello world";
	printf("%s",ft_substr(go,3,5));
}
*/
