/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mresch <mresch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:00:34 by mresch            #+#    #+#             */
/*   Updated: 2023/09/06 15:47:16 by mresch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ans;

	i = 0;
	ans = malloc(ft_strlen(s) + 1);
	if (!ans)
		return (0);
	while (s[i] != 0)
	{
		ans[i] = s[i];
		i++;
	}
	ans[i] = 0;
	return (ans);
}
