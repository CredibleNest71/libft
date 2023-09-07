/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:36:21 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 16:51:48 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	temp = 0;
	i = 0;
	while (i < n)
	{
		temp[i] = ((char *) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = temp[i];
		i++;
	}
}
