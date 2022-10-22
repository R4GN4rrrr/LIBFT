/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:48:33 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/22 21:40:53 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	l = ft_strlen(s1) - 1;
	while (l >= 0 && ft_strchr(set, s1[l]))
		l--;
	str = ft_substr(s1, i, l - i + 1);
	return (str);
}
// int main()
// {
// 	char	x[] = "/*/*abcdef/*/*";
// 	char	y[] = "/*";
// 	printf("%s\n", ft_strtrim(x, y));
// }
