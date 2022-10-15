/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:15:08 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/14 20:09:38 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned    int index;
    unsigned    char    *tmp;

    tmp = (unsigned char *)s;
    index = 0;
    while (index < n)
    {
        if(tmp[index] == (unsigned char ) c)
            return (void *) &tmp[index];
        index++;
    }
    return(NULL);
}

/*int main()
{
    char    x[] = "hello there";
    int    y = 't';
    printf("%s\n", ft_memchr(x, y, 7));
}*/  