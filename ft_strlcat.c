/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:13:16 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/17 15:57:23 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	k;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	if (dstsize == 0 || dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	k = dst_len;
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[k++] = src[i++];
	}
	dst[k] = '\0';
	return (dst_len + src_len);
}
