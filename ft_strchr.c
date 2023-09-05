/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:38:36 by mresch            #+#    #+#             */
/*   Updated: 2023/09/05 12:52:05 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while ((s[i] != c) && s[i] != 0)
		i++;
	p = &s[i];
	return (p);
}
/*
#include <unistd.h>
int main()
{
	char test[] = "17 alpacas passen nicht in mein zimmer";
	write(1, ft_strchr(test, 'y'), 10);
	return 0;
}
*/