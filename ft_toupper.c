/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:47:25 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/13 23:23:50 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int	c)
{
	if(c >= 97 && c <= 122)
	{
		c -=32;
	}
	return(c);
}
/*int main()
{
	printf("%c",ft_toupper('a'));
}*/