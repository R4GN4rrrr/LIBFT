/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:53:29 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:55:16 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (i >= 0)
    {       
        if(s[i] == c)
            return((char *) &s[i]);
        i--;
    }   
    return(NULL);
}
int main()
{
    char    x[] = "hello there";
    int y = 'a';
    printf("%s\n",ft_strrchr(x, y));
}