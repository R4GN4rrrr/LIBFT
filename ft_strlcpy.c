/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:54:37 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:22:43 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst,const char	*src,size_t	dstsize)
{
    unsigned    int i = 0;
    unsigned    int len = 0;

    while (src[len]!= '\0')
    len++;
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(len);
}
/*int main()
{
    char    x[] = "hello";
    char    y[3];
    char    y1[3];
    printf("ft_strlcpy: %lu\n", ft_strlcpy(y, x, 3)); 
    printf("strlcpy: %lu\n", strlcpy(y1, x, 3)); 
    printf("y: %s\n", y);
    printf("y1: %s\n", y1);
}*/