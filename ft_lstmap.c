/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:14:51 by codespace         #+#    #+#             */
/*   Updated: 2023/09/13 11:39:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = ft_lstnew(NULL);
	while (lst)
	{
		ft_lstadd_back(&newlst, lst);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	ft_lstiter(newlst, f);
	return (newlst);
}
