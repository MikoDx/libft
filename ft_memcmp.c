/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:23:37 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/22 17:34:40 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t					i;
	const unsigned char		*p1;
	const unsigned char		*p2;

	i = 0;
	p1 = ptr1;
	p2 = ptr2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (*(p1 + i) != *(p2 + i))
			return (*(p1 + i) - *(p2 + i));
		i++;
	}
	return (0);
}
