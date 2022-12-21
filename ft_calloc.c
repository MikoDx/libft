/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:35:29 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/17 16:02:36 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


{
	void	*mem;

	mem = malloc(num * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}
