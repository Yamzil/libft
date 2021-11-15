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

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *temp;

	i = 0;
	if(!s)
		return NULL;
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	temp = malloc ((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (len > i)
	{
		temp[i] = (char)s[i + start];
		i++;
	}
	temp[i] = '\0';
	return (temp);	
}


// #include<stdio.h>
// int main()
// {
// 	char go[] ="amzilyahya";
// 	printf("%s",ft_substr(go,2,4));
// }
