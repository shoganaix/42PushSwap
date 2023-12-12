/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:59:02 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:29 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	cpy;

	cpy = n;
	if (cpy < 0)
	{
		cpy *= (-1);
		write(fd, "-", 1);
	}
	if (cpy > 9)
	{
		ft_putnbr_fd(cpy / 10, fd);
		ft_putchar_fd((cpy % 10) + '0', fd);
	}
	else
		ft_putchar_fd(cpy + '0', fd);
}
