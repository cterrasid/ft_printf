/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:48:33 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/16 03:22:22 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*walker;
	t_list	*head;

	if (lst && f)
	{
		head = ft_lstnew(f(lst->content));
		if (head)
		{
			walker = head;
			lst = lst->next;
			while (lst)
			{
				walker->next = ft_lstnew(f(lst->content));
				if (!walker)
				{
					ft_lstclear(&head, del);
					return (NULL);
				}
				walker = walker->next;
				lst = lst->next;
			}
			return (head);
		}
	}
	return (NULL);
}
