/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:09:43 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/10 18:09:46 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}
/* #include <stdio.h>
#include <string.h>

int	main(void) 
{
    char str[20] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    ft_memset(str, '*', 4);  // Preenche os primeiros 5 bytes com '*'
    
    printf("Modified string: %s\n", str);
    
    return (0);
} */