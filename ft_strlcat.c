/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:05:35 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:57:20 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char	*s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return(i);
}*/
size_t	ft_strlcat(char	*dst, const char	*src,	size_t dstsize)
{
unsigned int	i;
unsigned int	j;
unsigned int	ldest;
unsigned int	lsrc;

	j = 0;
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
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
		return(ldest + lsrc);
	}
	return(dstsize + lsrc);
}
/*int main()
{
	char	x[12] = "hello";
	//char	x1[12] = "hello";
	char	y[] = "1337"; 
	printf("%zu\n", ft_strlcat(y, x, 0));
	//printf("%zu\n", strlcat(x1, y, 10));
	printf("%s", x);
}*/