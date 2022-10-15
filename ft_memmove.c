/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:31:31 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/15 03:24:27 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void   *src, size_t    len)
{
    size_t i;
    unsigned char   *dest;
    unsigned char   *source;

    i = 0;
    dest = (unsigned char *)dst;
    source = (unsigned char *)src;

    while(source[i] && i < len)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
   // if (dest == source)
       // return(dest);
    
}
/*int main()
{
    char    x[] = "hello";
    char    y[] = "hello";
    printf("%s\n", ft_memmove(y, x, 5));
    //printf("%s\n", memmove(z, x, 5));
}*/