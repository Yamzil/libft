/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:46:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 14:32:34 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char go[] = "abcd";
	char gi[] = "amz";
	printf("%d\n",ft_strncmp(go,gi,2));
	printf("%d",strncmp(go,gi,2));
}
*/
