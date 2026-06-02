/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luafranc <luafranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:07:45 by luafranc          #+#    #+#             */
/*   Updated: 2026/06/02 19:09:32 by luafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   s1_new;
    unsigned char   s2_new;
    size_t          i;

    i = 0;

    while(i < n && (s1_new[i] == s2_new[i]))
    {
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char)s1_new - (unsigned char)s2_new);
}