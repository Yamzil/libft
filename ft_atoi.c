/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:03:57 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 18:41:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	base;

	i = 0;
	sign = 1;
	base = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f'))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		base = (base * 10) + (str[i] - 48);
		i++;
	}
	return (base * sign);
}
/*
#include<stdio.h>
int main()
{
    printf("%d\n",ft_atoi("  -1234a  b567"));
    printf("%d",atoi("  -1234a  b567"));
}
*/
