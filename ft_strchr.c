#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/* int	main(void)
#include <stdio.h>
#include <string.h>

{
	char str[] = "procurando Nemo!";
	printf("%s\n", ft_strchr(str, 'u'));
	return (0);
/*Segundo if e necessario caso estejamos
procurando o caractere '\0', para que não
de segmentation fault 
}/*
 
























/* char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
} */