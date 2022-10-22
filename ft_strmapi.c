/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:32:52 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/22 21:19:18 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	str = malloc((l + 1) * sizeof (char));
	if (!str)
		return (NULL);
	while (i < l)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char    up(unsigned int i,char  c)
// {   
//     i = 0;
//     c-= 32;
//     return(c);
// }
// int main()
// {
//     char    s[] = "hello";
//     printf("%s\n", ft_strmapi(s, up));
// }
