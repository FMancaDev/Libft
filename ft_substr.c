/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:56:40 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:56:44 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
	{
		len = size;
	}
	tab = (char *)malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*#include <stdio.h>

int 	main()
{
	char	*result;

	//Substring normal
	result = ft_substr("Hello, World!", 7, 5);
	if (result == NULL)
		printf("Teste 1: NULL (Esperado: World)\n");
	else
	{
		printf("Teste 1: %s (Esperado: World)\n", result);
		free(result);
	}

	//fora do comprimento da string
	result = ft_substr("Hello", 10, 3);
	if (result == NULL)
		printf("Teste 2: NULL (Esperado: string vazia)\n");
	else
	{
		printf("Teste 2: %s (Esperado: string vazia)\n", result);
		free(result);
	}

	//Comprimento maior que o restante da string
	result = ft_substr("Hello", 1, 10);
	if (result == NULL)
		printf("Teste 3: NULL (Esperado: ello)\n");
	else
	{
		printf("Teste 3: %s (Esperado: ello)\n", result);
		free(result);
	}
}*/
