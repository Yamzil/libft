/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:29 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/03 15:53:21 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;

	while (s[i])
		i++;
	return (i);
}
/*
#include<stdio.h>
int main()
{
	char go[] = "yamzil";

	printf("%zu\n",ft_strlen(go));
	printf("%zu",strlen(go));
}
*/
