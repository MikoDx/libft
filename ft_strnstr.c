/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:48:49 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/21 18:18:19 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen((char *)little);
	if (!little_len)
		return ((char *)big);
	if (!len)
		return ((char *) NULL);
	while (i <= (len - little_len) && big[i])
	{
		if (!ft_strncmp(&big[i], little, little_len))
			return ((char *)&big[i]);
		i++;
	}
	return ((char *) NULL);
}
