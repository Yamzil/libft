/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:16:55 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 01:56:36 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = ft_strlen(s1);
	temp = malloc((j + 1) * sizeof (char));
	if (!temp)
		return (0);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp [i] = '\0';
	return (temp);
}
