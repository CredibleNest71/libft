/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:54:08 by mresch            #+#    #+#             */
/*   Updated: 2023/09/06 17:03:29 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(const char *s1, const char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	while (s2[i])
		i++;
	len += i;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*ans;

	j = 0;
	i = -1;
	len = get_len(s1, s2);
	ans = malloc(len + 1);
	if (!ans)
		return (0);
	while (s1[++i])
		ans[i] = s1[i];
	while (s2[j])
	{
		ans[i] = s2[j];
		i++;
		j++;
	}
	ans[i] = 0;
	return (ans);
}
/*
int main(int ac, char **av)
{
	printf("%s", ft_strjoin(av[1], av[2]));
	return 0;
}
*/