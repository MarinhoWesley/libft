/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:09:32 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/10 18:24:15 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	lendst = ft_strlen (dst);
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	dst = dst + lendst;
	dstsize = dstsize - lendst;
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (lendst + lensrc);
}
/* #include <stdio.h>

int main(void) {
    char dst[20] = "Hello";
    char src[] = ", world!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcat(dst, src, dstsize); // Chama a função ft_strlcat

    printf("Concatenated string: %s\n", dst);
    printf("Result: %zu\n", result);

    return 0;
} */
