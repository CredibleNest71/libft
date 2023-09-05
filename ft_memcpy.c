/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:19:08 by mresch            #+#    #+#             */
/*   Updated: 2023/09/05 12:20:48 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	const char	*psrc;
	char		*pdest;
	int			i;

	psrc = src;
	pdest = dest;
	i = 0;
	while (i < n)
	{
		if (&dest[i] == src)
			break ;
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
