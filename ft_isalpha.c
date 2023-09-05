/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:59:11 by mresch            #+#    #+#             */
/*   Updated: 2023/09/05 16:24:57 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
	return (1);
}
