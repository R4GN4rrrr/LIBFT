/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:55:33 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/15 21:13:07 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_calloc(size_t count, size_t  size)
{
    void    *p;

    
    p = malloc(count * size);
    if(!p)
        return(NULL);
    ft_bzero(p, (count * size));
    return(p);
}
// int main()
// {
//     int    *x;
//     // x = malloc((size_t)"hello" * sizeof(int));
//     x = ft_calloc(5, sizeof(int));
//     // printf("%s\n", x);
//     for (int i = 0; i < 5; i++)
//         printf("x[%d] => %d\n", i, x[i]);
// }