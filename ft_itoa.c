/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:19:30 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 05:10:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int d)
{
	int	i;

	i = 0;
	if (d < 0)
		i++;
	while (d != 0)
	{
		d /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = countdigits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	temp = malloc((j + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	if (n < 0)
	{
		temp[0] = '-';
		n *= -1;
	}
	temp[j--] = '\0';
	while (n > 0)
	{
		temp[j--] = (n % 10) + 48;
		n /= 10;
	}
	return (temp);
}
