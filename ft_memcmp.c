/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:12:13 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/15 17:15:45 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char    *tmp;
    unsigned char    *tmp1;

    i = 0;
    tmp = (unsigned char  *)s1;
    tmp1 = (unsigned char *)s2;
    while(tmp[i] == tmp1[i] && i < n)
        i++;
        return (int)(tmp[i] - tmp1[i]);
    if(tmp == tmp1)
        return(0);
}
/*int main()
{
    char    x[] = "aaaac";
    char    y[] = "aaaab";
    printf("%d\n",ft_memcmp(x,y,5));
}*/