/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:06:24 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/25 04:28:24 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*tmp;
	char		*tmp1;

	tmp = (const char *)src;
	tmp1 = (char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		tmp1[i] = tmp[i];
		i++;
	}
	return (dst);
}
// int main()
// {
//     int    d[4] = {};
//     int    s[] = {1, 2, 3, 4};
// 	ft_memcpy(d, s, sizeof(s));
// 	for (int i = 0; i < 4; i++)
// 	{
// 		printf("%d\n", s[i]);
// 	}
// 	// 010011010 binary
// }
// int main()
// {
// 	char src[] = "hello";
// 	// char dst[100];
// 	printf("%s\n", ft_memcpy(src + 1, src, 3));
// }