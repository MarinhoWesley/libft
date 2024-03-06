/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:42:52 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/01 09:24:05 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void) 
{
    char str[] = "Hello, World!";
    
    printf("Before ft_bzero: %s\n", str);
    
    ft_bzero(str, sizeof(str));
    
    printf("After ft_bzero: %s\n", str);
    
    return (0);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}
As duas funções realizam a mesma coisa,
a primeira estou chamando a minha função
ja criada para realizar a substituição, 
a segunda, estou criando uma interação,
para fazer o mesmo, acessar a string, 
apontada pelo ponteiro e substituir para 0.
 */