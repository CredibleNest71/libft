/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:18:37 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 16:54:55 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chc(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	g_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!(chc(s1[i], set)))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = g_len(s1, set);
	ans = malloc(len + 1);
	if (!ans)
		return (0);
	while (s1[i])
	{
		if (!(chc(s1[i], set)))
			ans[j++] = s1[i];
		i++;
	}
	ans[j] = 0;
	return (ans);
}
/*
int main(int ac, char **av){
	printf("%s", ft_strtrim(av[1], av[2]));
	return 0;
}
*/