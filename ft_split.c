/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:03:50 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/16 18:03:53 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_thewords(const char *str , char c)
{
	int	count;

	count = 0;
	str--;
	while (*(++str))
		if ((*(str + 1) == c || !*(str + 1)) && *str != c)
			count++;
	return (count);
}

/*
#include<stdio.h>
 int main()
 {
		char s[] = "  hellow                         rojl kfj";
		printf("%d",count_thewords(s,' '));
}
*/