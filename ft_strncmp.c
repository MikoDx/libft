/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:01:56 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/12 12:36:34 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned long	i;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	if (!n)
		return (0);
	while (n - 1 > 0 && (s1[i] && s2[i]))
	{
		if (!(s1[i] == s2[i]))
			break ;
		i++;
		n--;
	}
	return (*(s1 + i) - *(s2 + i));
}
