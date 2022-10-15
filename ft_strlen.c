/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:32:02 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:52:53 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return(i);
}
/*int main()
{
	char	x[] = "jkdbnjkbnx";
	printf("%d",ft_strlen(x));
}*/
