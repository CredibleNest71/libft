/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:05:18 by mresch            #+#    #+#             */
/*   Updated: 2023/05/30 13:05:21 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main(){
	char test[] = "testme";
	char	test2[] = "hallo"; 
	if (ft_strlcpy(test, test2, 5) == 5)
		write(1, "erforg", 6);
	int i = 0;
	while (test[i] != 0)
		write(1, &test[i++], 1);
}
*/
