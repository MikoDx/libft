/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:45:27 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/12 10:50:58 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		chrlen;

	chrlen = ft_strlen((char *)str);
	str += chrlen;
	while (chrlen >= 0)
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)str);
		}
		str--;
		chrlen--;
	}
	return (NULL);
}
