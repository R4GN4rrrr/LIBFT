/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:35:50 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/17 21:56:37 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h" 

char    *ft_strchr(const char   *s,int  c)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(s);
    while (i <= len)
    {
        if(s[i] == c)
            return((char *) &s[i]);
        i++;
    }
    return(0);
}
/*int main()
{
    char    x[] = "hello";
    int    y = 'e';
    printf("%s\n",ft_strchr(x, y));
}*/
