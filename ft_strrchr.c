/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:53:29 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/21 23:46:03 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)(&s[i]));
		i--;
	}
	return (0);
}
// int main()
// {
//     char    x[] = "";
//     int y = 'a';
//     printf("%s\n",ft_strrchr(x, y));
// }
