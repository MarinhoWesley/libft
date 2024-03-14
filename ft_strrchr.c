#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int slen;

    slen = ft_strlen(s);
    while (slen >= 0)
    {
        if(s[slen] == (char)c)
            return ((char *)(s + slen));
        slen--;
    }
    return (NULL);
}

/* int	main()
{
	char	str[] = "procurando Nemo!";
	printf("%s\n", ft_strrchr(str, '\0'));
	return (0);
    
    Nessa versão, o programa percorre de 
    tras para frente, não sendo necessario
    o segundo if, procurando o caractere nulo
} */