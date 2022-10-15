/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:35:50 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:21:09 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h" 

char    *ft_strchr(const char   *s,int  c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if(s[i] == c)
            return((char *) &s[i]);
        i++;
    }
    return(NULL);
}
/*int main()
{
    char    x[] = "hello";
    int    y = 'e';
    printf("%s\n",ft_strchr(x, y));
}*/
