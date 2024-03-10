/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:09:58 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/10 18:10:07 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1) // -1 terminador nulo
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
/* #include <stdio.h>

int	main(void)
{
	char src[] = "Hello, world!";
	char dst[sizeof(src)];

	size_t len = ft_strlcpy(dst, src, sizeof(dst));

	printf("Source string: %s\n", src);
	printf("Copied string: %s\n", dst);
	printf("Length of copied string: %ld\n", len);

	return (0);
} */