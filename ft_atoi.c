/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:57:40 by mresch            #+#    #+#             */
/*   Updated: 2023/09/06 14:03:59 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	space(char c)
{
	if (9 <= c && c <= 13)
		return (1);
	else if (c == 32)
		return (1);
	else 
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	ans;
	int	fac;

	fac = 1;
	i = 0;
	ans = 0;
	while (space(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	if (nptr[i] > '9' || nptr[i] < '0')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	i--;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ans += fac * (nptr[i] - 48);
		fac *= 10;
		i--;
	}
	if (nptr[i] == '-')
		ans *= -1;
	return (ans);
}

/*
int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return 0;
}
*/