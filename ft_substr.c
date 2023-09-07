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

	i = 0;
	while (s[i])
		i++;
	if (start > i || len == 0)
		return (0);
	if (i < len)
		len = i;
	ans = malloc(len + 1);
	if (!ans)
		return (0);
	i = 0;
	while (s[start] != 0 && len > 0)
	{
		ans[i] = s[start];
		i++;
		start++;
		len--;
	}
	ans[i] = 0;
	return (ans);
}
