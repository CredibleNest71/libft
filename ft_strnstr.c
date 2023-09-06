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
	char	*found;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] != 0 && len > 0 && little[j] != 0)
	{
		if (big[i] != little[j])
			j = 0;
		if (big[i] == little[j])
		{
			if (j == 0)
				found = (char *) &big[i];
			j++;
		}
		i++;
		len--;
	}
	if (little[j] == '\0')
		return (found);
	return (0);
}
/*
int main(){
	printf("%s", ft_strnstr("Palmen sind keine Alpacas. Punkt.", "k", 100));
	return 0;
}
*/