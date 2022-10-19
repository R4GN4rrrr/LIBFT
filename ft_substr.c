/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:29:07 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/19 23:35:28 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t  i;
    char    *str;

    if(!s)
        return(0);
    if(start > ft_strlen(s))
        return(ft_strdup(""));
    str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return(0);
    i = 0;
    while(i < len)
    {
        str[i] = s[start + i];
        i++; 
    }
    str[i] = '\0';
    return(str);
}
// int main()
// {
//     char    x[] = "hello";
//     // int    y = 'e';
//     printf("%s\n",ft_substr(x, 2, 4));
// }