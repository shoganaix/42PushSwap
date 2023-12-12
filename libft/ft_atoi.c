/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:19:56 by msoriano          #+#    #+#             */
/*   Updated: 2023/12/12 14:10:31 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
/*
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	count;
	int	nbr;

	count = 0;
	sign = 1;
	while ((str[count] == 32) || (str[count] >= 9 && str[count] <= 13))
	{
		count ++;
	}
	if (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			sign *= -1;
		count ++;
	}
	nbr = 0;
	while (str[count] >= 48 && str[count] <= 57)
	{
		nbr = nbr * 10 + (str[count] - 48);
		count ++;
	}
	result = nbr * sign;
	return (result);
}*/

/*int	main(void)
{
	printf("%d", ft_atoi("546:5"));
	return (0);
}*/
