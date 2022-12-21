/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:28:44 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/22 14:56:42 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned long	i;

	i = 0;
	temp = (unsigned char *)malloc(sizeof(unsigned char *) * n);
	while (n - i > 0)
	{
		*((unsigned char *)temp + i) = *((unsigned char *)src + i);
		i++;
	}
	i = 0;
	while (n - i > 0)
	{
		*((unsigned char *)dest + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (dest);
}
