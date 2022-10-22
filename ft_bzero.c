/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:17:05 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/21 21:57:43 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
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
