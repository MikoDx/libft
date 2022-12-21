/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:34:27 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/22 18:21:22 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim2(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	l;
	char			*s2;

	i = 0;
	l = 0;
	k = ft_strlen((char *)s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[i] && trim2(set, s1[i]))
		i++;
	while (s1[k] && trim2(set, s1[k]) && k >= i)
		k--;
	s2 = (char *) malloc(sizeof(char) * ((k - i) + 1));
	if (!s2)
		return (NULL);
	while (i <= k)
		s2[l++] = s1[i++];
	s2[l] = '\0';
	return (s2);
}
