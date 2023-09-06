/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:29:28 by mresch            #+#    #+#             */
/*   Updated: 2023/09/06 12:04:09 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j != size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (i);
}
/*
int main(){
	char test[] = "hallo";
	char app[] = " wie gehts";
	int i = 0;
	
	if (ft_strlcat(test, app, 7) == 15)
		write(1, "erfolg", 7);
	while (test[i] != 0)
	{
		write(1, &test[i++], 1);
	}
}

*/