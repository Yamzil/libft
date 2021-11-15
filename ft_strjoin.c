/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:06:53 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/11 18:06:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int n;
    char    *temp;
    if (!s1 || !s2)
        return (NULL);
    i = 0;
    n = 0;
    temp =(char *)malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (temp == NULL)
        return (0);
    while  (s1[i])
        temp[n++] = s1[i++];
    i = 0;
    while  (s2[i])
        temp[n++] = s2[i++];
    temp [n] = '\0';
    return(temp);
}
/*
    #include<stdio.h>
    int main()
    {
        char go[] = "Yahya";
        char gi[] = "amzil";

        printf("%s",ft_strjoin(go,gi));
    }
*/