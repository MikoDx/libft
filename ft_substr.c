/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:14:03 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/22 18:01:56 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned long	i;

	if (!s || start >= ft_strlen((char *)s))
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!temp)
		return (NULL);
	s += start;
	while (i < len && *s)
	{
		temp[i] = ((char *)s)[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
