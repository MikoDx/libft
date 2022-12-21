/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:16:05 by muhaaydi          #+#    #+#             */
/*   Updated: 2022/10/21 18:24:39 by muhaaydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	*templ;
	t_list	*temp;

	i = ft_lstsize(lst);
	if (!lst || !*f || !*del)
		return (NULL);
	temp = NULL;
	while (lst)
	{
		templ = ft_lstnew((*f)(lst->content));
		if (!templ)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&temp, templ);
		lst = lst->next;
	}
	return (temp);
}
