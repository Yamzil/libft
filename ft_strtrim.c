/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:13:16 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 05:03:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, s1[i]))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, 0, j + 1));
}
/*
#include<stdio.h>
int main()
{
   char s1[]="hhhhlhhlohlaaahhlhhlh";
   printf("[%s]",ft_strtrim(s1, "lh")); 
}
*/
