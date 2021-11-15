/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:36:54 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/15 15:36:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while(s[i])
    {
        f(i,&s[i]);
        i++;
    }
}

#include <stdio.h>

char *f(unsigned int i, char c)
{
    i = 0;
	if (c >= 97 && c <= 122)
		return (65 + c - 97);
	else
		return (&c);
}
int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_striteri(str1, f);
	printf("%s\n", str2);
}
*/