/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wemarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:11:05 by wemarinh          #+#    #+#             */
/*   Updated: 2024/03/10 18:11:07 by wemarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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