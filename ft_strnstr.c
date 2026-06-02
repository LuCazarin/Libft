/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luafranc <luafranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:03:37 by luafranc          #+#    #+#             */
/*   Updated: 2026/06/02 15:22:38 by luafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big)
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((i + j) < len && big[i] && little[j] && big[i
				+ j] == little[j])
				j++;
			if (!little[j])
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
