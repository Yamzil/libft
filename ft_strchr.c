/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:10:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 01:56:08 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*ss;

	i = 0;
	ss = (char *) s;
	cc = (char) c;
	while (ss[i] != cc && ss[i])
		i++;
	if (ss[i] == cc)
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
