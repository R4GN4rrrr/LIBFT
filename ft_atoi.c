/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:10:08 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/21 22:03:09 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	nbr;

	s = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if ((*str == '-'))
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += (*str - 48);
		str++;
	}
	return (s * nbr);
}
/*int main()
{
    char    x[] = "2147483649";
    printf("%d\n",ft_atoi(x));
}*/
