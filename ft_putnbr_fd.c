/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:42:05 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 13:58:18 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function name ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Turn in files -
Parameters n: The integer to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor.*/

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	i = 12;
	if (!n)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	str[i--] = 0;
	while (n > 0)
	{
		str[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	while (str[++i])
		write(fd, &str[i], 1);
}
/*
int main ()
{
	ft_putnbr_fd(2147483647, 1);
	return 0;
}
*/