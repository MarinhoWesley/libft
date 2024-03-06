/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:15:03 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/06 09:15:08 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	while (dst > n)
	{
		/* *dst = *src; */
		i++;
	}
	return (dst);
}
#include <stdio.h>

int	main(void)
{
    char destino[] = "";
    char busca[] = "aqui o teste";

    memmove(destino, busca, 4);
    printf("%s", destino);
    
}