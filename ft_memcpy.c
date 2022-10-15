/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:06:24 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/15 17:53:48 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;

    
    const char *tmp = (const char *) src;
    char  *tmp1 = (char *) dst;

    i = 0;
    if (dst == NULL && src == NULL)
        return(0);
    while (i < n)
    {
        tmp1[i] = tmp[i];
        i++;
    }
    return (dst); 
}
/*int main()
{
    char    x[] = "test";
    char    y[] = "";
    printf("mem: %s\n",ft_memcpy(y, x, 4));
}*/