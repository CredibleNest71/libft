/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:37:13 by mresch            #+#    #+#             */
/*   Updated: 2023/09/07 16:50:24 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;
	size_t	j;

	i = 0;
	while(s[start + i] && i < len)
		i++;
	ans = malloc(i + 1);
	if (!ans)
		return (0);
	j = 0;
	while (s[start] != 0 && j < i)
	{
		ans[j] = s[start];
		j++;
		start++;
	}
	ans[j] = 0;
	return (ans);
}
