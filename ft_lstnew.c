/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:10:07 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/10 12:10:09 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*listn;

	listn = (t_list *)malloc(sizeof(t_list));
	if (!listn)
		return (NULL);
	listn->content = content;
	listn->next = NULL;
	return (listn);
}
