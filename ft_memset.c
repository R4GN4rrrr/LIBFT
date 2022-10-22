/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:47:36 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/21 22:36:40 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = b;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main()
{
	char s1[20] = "hello";
	char s[20] = "hello";
	//printf("%s\n",ft_memset(s, 'A', 3));
	printf("actual function: %s\n", memset(s1, '!', 2));
	printf("my function: %s\n", ft_memset(s, '!', 2));
	return 0;
}*/
