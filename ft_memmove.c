#include <string.h>

void	*memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*dst = *src;
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
    
    
}SHA256:GVjSHW9AGx9r+tXxPy+2Eo+F49tlBbs2ycAICdxZPIM wesleymarinhofe23@gmail.com