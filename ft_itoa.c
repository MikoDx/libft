/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:25:21 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/21 18:25:07 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(long n)
{
	size_t	c;

	c = 0;
	if (n < 0)
	{
		n *= -1;
		c++;
	}
	while (n >= 0)
	{
		n /= 10;
		c++;
		if (n == 0)
			break ;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	n2;
	size_t	len;
	char	*toarray;

	n2 = n;
	len = count_digit(n2);
	toarray = malloc(sizeof(char) * (len + 1));
	if (!toarray)
		return (NULL);
	if (n2 < 0)
	{
		n2 *= -1;
		toarray[0] = '-';
	}
	toarray[len--] = '\0';
	while (n2 >= 0)
	{
		toarray[len] = (n2 % 10) + '0';
		n2 /= 10;
		len--;
		if (n2 == 0)
			break ;
	}
	return (toarray);
}
