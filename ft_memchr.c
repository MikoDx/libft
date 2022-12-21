/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:20:27 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/11 12:46:58 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*result;

	result = NULL;
	while (n > 0)
	{
		if (*(unsigned char *)ptr == (unsigned char)c)
		{
			result = (unsigned char *)ptr;
			break ;
		}
		ptr++;
		n--;
	}
	return (result);
}
