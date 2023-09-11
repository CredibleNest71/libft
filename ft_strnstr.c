/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:24:20 by mresch            #+#    #+#             */
/*   Updated: 2023/09/06 12:57:00 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < (int) len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < (int) len && big[i + j])
		{
			j++;
			if (!little[j])
				return ((char *) (big + i));
		}
		i++;
	}
	return (0);
}
/*
int main(){
	printf("%s", ft_strnstr("Palmen sind keine Alpacas. Punkt.", "k", 100));
	return 0;
}
*/