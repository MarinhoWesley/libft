#include "libft.h"

int	ft_isanum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'));
}
/* #include <stdio.h>
int	main(void)
{
    int digito = 'a';
    printf("%d", ft_isanum(digito));
 //função verifica se 
 //os caracteres sao alfa ou digitos    
} */