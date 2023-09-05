/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:25:17 by mresch            #+#    #+#             */
/*   Updated: 2023/09/05 15:38:23 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	if (strncmp("hey","hey",3) == ft_strncmp("hey","hey",3))
		write(1, "erfolg", 10);
	else
		write(1, "nonono", 10);
	printf("\nval of og = %d\n", strncmp("heyb", "heyz", 78));
	printf("\nval of mine = %d\n", ft_strncmp("heyb", "heyz", 78));
	return 0;
}
*/