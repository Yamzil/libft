/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:16:55 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 16:59:50 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = ft_strlen(s1);
	temp = malloc((j + 1) * sizeof (char));
	if (temp == NULL)
		return (0);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp [i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int main()
{
	char go[]="yahya";
	printf("%s\n",ft_strdup(go));
	printf("%s",strdup(go));
}
*/
