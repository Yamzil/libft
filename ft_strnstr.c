/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:43:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/07 11:26:10 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	i = 0;
	hay = (char *) haystack;
	need = (char *) needle;
	if (need == NULL && hay == NULL)
		return(NULL);
	while (hay[i] && len > i)
	{
		j = 0;
		while (hay[j] == need[j + i] && len < (i + j))
			if (need[i+j] == '\0')
				return(&hay[i]);
			else if (need[i+j] == hay[i])
				return (&need[i+j]);
		j++;
	i++;
	}
	return (0);
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