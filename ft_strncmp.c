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

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    unsigned char *s11;
    unsigned char *s22;


    i = 0;
    s11 = (unsigned char *) s1;
    s22 = (unsigned char *) s2;
    if (n == 0)
        return (0);
    while ((s11[i] != '\0' || s22[i] != '\0') && i < n )
    {
        if(s11[i] != s22[i])
            return (s11[i]  - s22[i]);
        i++;
    }
    return (0);
    //return ((unsigned char )s1[i] - (unsigned char )s2[i]);
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
