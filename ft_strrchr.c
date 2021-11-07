/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:00:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 16:37:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;
	int i;

	j = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		i++;
		j++;
	}
	while (s[i])
	{
		if (s[j] != c)
		{
			return (NULL);
		else
			return (&s[j]);
		}
		j--;
		i--;
	}
}

#include <stdio.h>
int main()
{
    char go[] = "mohammed";
    char c = 'm';
    printf("%s\n",strrchr(go,c));
    printf("%s",ft_strrchr(go,c));
}

