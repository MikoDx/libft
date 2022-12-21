/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:26:08 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/18 15:04:52 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (!s1 && !s2)
		return (s1);
	while (n > 0)
	{
		*((unsigned char *)s1 + i) = *((unsigned char *)s2 + i);
		n--;
		i++;
	}
	return (s1);
}
