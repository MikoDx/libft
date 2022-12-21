/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:05:49 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/17 19:07:48 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	s;

	s = n;
	if (s == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (s < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(s * -1, fd);
	}
	else if (s < 10)
	{
		ft_putchar_fd((char)(s + '0'), fd);
	}
	else
	{
		ft_putnbr_fd(s / 10, fd);
		ft_putnbr_fd(s % 10, fd);
	}
}
