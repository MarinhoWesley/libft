/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:15:03 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/10 17:49:23 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stddef.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst1[15] = "Olá, mundo!";
	char src1[11] = "Novo texto";
	size_t len1 = strlen(src1);

	printf("Antes da chamada ft_memmove:\n");
	printf("Destino (dst1): %s\n", dst1);
	printf("Origem (src1): %s\n", src1);

	ft_memmove(dst1 + 5, src1, len1); // Move "Novo texto" para o meio de "Olá,
		mundo !"

	dst1[5 + len1] = '\0';

	printf("**Depois da chamada ft_memmove:**\n");
	printf("Destino (dst1): %s\n", dst1);

	return (0);
} */