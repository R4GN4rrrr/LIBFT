/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:35:40 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 03:57:13 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    

    i = 0;
    j = 0;
    while (needle[j] == '\0')
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
/*int main()
{
    char    x[] = "hello 42 cursus";
    char    y[] = "o";
    printf("%s\n",ft_strnstr(x, y, 11));
}*/