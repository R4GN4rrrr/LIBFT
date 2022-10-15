/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:35:53 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/14 20:21:02 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1,const char	*s2, size_t n)
{
    unsigned int i = 0;

    while (s1[i] !='\0' && s1[i] == s2[i] && i < n)
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
/*int main()
{
    char    x[] = "65";
    char    y[] = "67";
    printf("%d\n",ft_strncmp(x,y,5));
}*/