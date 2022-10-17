/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:35:40 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/17 22:36:27 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    

    i = 0;
    j = 0;
    if (!haystack && len == 0)
        return (0);
    if (needle[j] == '\0')
        return((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
            j++;
        if (needle[j] == '\0')
            return((char *)haystack + i);
        i++;
        j = 0;
    }
    return(0); 
}
// int main()
// {
//     char    x[] = "MZIRIBMZIRIBMZE123";
//     char    y[] = "MZIRIBMZE";
//     printf("%s\n",ft_strnstr(x, y, 10));
//     printf("%s\n",strnstr(x, y, 10));
// }