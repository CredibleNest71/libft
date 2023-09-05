/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:52:52 by mresch            #+#    #+#             */
/*   Updated: 2023/09/05 13:01:47 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != 0)
		i++;
	while (s[i] != c && i >= 0)
		i--;
	if (i >= 0)
		return (&s[i]);
	else
		return (0);
}
/*
#include <unistd.h>
int main()
{
	char test[] = "17 alpacas passen nicht in mein zimmer";
	write(1, ft_strrchr(test, '1'), 10);
	return 0;
}
*/