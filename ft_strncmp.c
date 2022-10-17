/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:35:53 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/17 22:26:04 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1,const char	*s2, size_t n)
{
    unsigned int i = 0;

    while ((s1[i] !='\0'|| s2[i] != '\0') && i < n)
    {
       if( (unsigned char) s1[i] != (unsigned char) s2[i])
        return((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return(0);
    
}
// int main()
// {
//     char    x[] = "abcdef";
//     char    y[] = "abcdefghijklmnop";
//     printf("%d\n",ft_strncmp(x,y,6));
// }