/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:53:41 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/18 15:31:29 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*str2;
	unsigned long	i;

	i = 0;
	str2 = (char *)malloc(sizeof(char) * (ft_strlen((char *)str) + 1));
	if (!str2)
		return (NULL);
	while (i < ft_strlen((char *)str))
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
