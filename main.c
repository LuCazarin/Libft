/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luafranc <luafranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:38:46 by luafranc          #+#    #+#             */
/*   Updated: 2026/06/02 10:42:38 by luafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
void test_strnstr();

int main()
{
    test_strnstr();
}


void test_strnstr()
{
    printf("teste strnstr\n");
    char*big = "FRASENORMAL";
    printf("minha ft_strnstr: %s",ft_strnstr(big,"NOR",11));
    // printf("original strnstr: %s",strnstr(big,"NOR",11));
}