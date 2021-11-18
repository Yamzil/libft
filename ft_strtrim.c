/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:13:16 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/11 21:13:18 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strfind(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int check_set_begin(char *str, char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (ft_strfind(str, s[i]))
            i++;
        else
            return (i);
    }
    return (i);
}

int check_set_end( char *str, char *s)
{
    int i;

    i = ft_strlen(s) - 1;
    while (i > 0)
    {
        if (ft_strfind(str, s[i]))
            i--;
        else
            return (i);
    }
    return (i);
}

char *ft_strtrim(const char *s1, char const *set)
{
    int i;
    int j;
    char *temp;
    char *s11;
    int k;

    k = 0;
    i = 0;
    if (!s1)
        return(NULL);
    s11 = (char *)s1;
    i = (check_set_begin((char *)set, (char *)s1));
    j = (check_set_end((char *)set, (char *)s1))+1;
    if (!i && !j)
        return (ft_strdup(s1));
    if (j - i <= 0)
    {
        return (ft_strdup(""));
    }
    temp = malloc(sizeof(char) * (j - i + 1));
    if(!temp)
        return (NULL);
    while (i < j)
    {
        temp[k] = s11[i];
        i++;
        k++;
    }
    temp[k] = '\0';
    return (temp);
}

#include<stdio.h>
int main()
{
   char s1[]="hhhhlhhlohlaaahhlhhlh";
   printf("[%s]",ft_strtrim(s1, "lh")); 
}
