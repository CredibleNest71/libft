/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:11:54 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 13:43:24 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function name ft_itoa
Prototype char *ft_itoa(int n);
Turn in files -
Parameters n: the integer to convert.
Return value The string representing the integer.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

int	count_digits(int n)
{
	unsigned int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*ans;
	int		i;
	int		negative;

	negative = 0;
	i = 0;
	digits = count_digits(n);
	ans = malloc(digits + 1);
	if (!ans)
		return (0);
	ans[digits] = 0;
	if (n == -2147483648)
	{
		ans = "-2147483648";
		return (ans);
	}
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	while (digits - i >= 0)
	{
		ans[digits - 1] = (n % 10) + '0';
		digits--;
		n /= 10;
	}
	if (negative)
		ans[0] = '-';
	return (ans);
}
/*
int main(int ac, char **av){
	printf("%s\n", ft_itoa(atoi(av[1])));
	return 0; 
}
*/