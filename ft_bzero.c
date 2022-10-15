/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:17:05 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/10 23:17:18 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char   *tmp = s;

    i = 0;
    while(i < n)
    {
        tmp[i] = '\0';
        i++;
    }
}
/*int main()
{
    char    x[] = "test";
    ft_bzero(x, 3);
    printf("%s",x);
}*/