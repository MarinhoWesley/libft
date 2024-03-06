#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Eu vi voce";
	char	dst[sizeof(src)];

	ft_memcpy(dst, src, sizeof(src));

	printf("Source: %s\n", src);
	printf("Copied: %s\n", dst);
	return 0;
}*/