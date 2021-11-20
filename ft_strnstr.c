/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:43:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 02:36:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (needle[b] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + a);
			b++;
		}
		a++;
	}
	return (NULL);
}
/*
#include<stdio.h>
 int main()
 {
    char go[] = "yahyamzil";
    char gi[] = "yam";
printf("%s\n",ft_strnstr(go,gi,7));
printf("%s",strnstr(go,gi,7));
}
*/
