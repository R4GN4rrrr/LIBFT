/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:05:35 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/21 23:29:13 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;
	unsigned int	lsrc;

	j = 0;
	lsrc = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (dstsize + lsrc);
	ldest = ft_strlen(dst);
	i = ldest;
	if (ldest < dstsize)
	{
		while (src[j] && j < dstsize - ldest - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ldest + lsrc);
	}
	return (dstsize + lsrc);
}

// int main()
// {
// 	char	x[12] = "hello";
// 	//char	x1[12] = "hello";
// 	char	y[] = "1337"; 
// 	printf("%zu\n", ft_strlcat(0, x, 0));
// 	printf("%zu\n", strlcat(0, y, 0));
// 	printf("%s", x);
// }
