/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:08:47 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/22 18:28:00 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_c(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		**temp;

	i = 0;
	j = 0;
	k = 0;
	temp = (char **)malloc(sizeof(char *) * (len_c(s, c) + 1));
	if (!temp)
		return (NULL);
	while (s[i] && k < len_c(s, c))
	{
		if (s[i] != c)
		{
			j = i++;
			while (s[i] && s[i] != c)
				i++;
			temp[k] = ft_substr(s, j, i - j);
			k++;
		}
			i++;
	}
	temp[k] = NULL;
	return (temp);
}
