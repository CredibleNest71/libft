/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:10:27 by codespace         #+#    #+#             */
/*   Updated: 2023/09/13 10:28:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;
	
	if (!(ret = (t_list *) malloc(sizeof(t_list *))))
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
