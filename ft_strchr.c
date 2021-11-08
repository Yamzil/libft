/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:10:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/05 11:42:45 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*ss;

	i = 0;
	ss = (char*) s;
	while (ss[i] != c && ss[i])
		i++;
	if (ss[i] ==  c)
		return (&ss[i]);
	else 
		return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char go[] = "amzmil";
    int c = 'x';
	printf("%s\n",ft_strchr(go,c));
    printf("%s",strchr(go,c));
}
*/

