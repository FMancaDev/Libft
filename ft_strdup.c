/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:16:17 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/20 13:51:32 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	dest = (char *) malloc (sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char original[] = "welcome to common core";
	char *duplicada;
	
	duplicada = ft_strdup(original);
	if (!duplicada)
	{
		printf("Falha na alocação de memória.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Dplicada: %s\n\n", duplicada);


	printf("Memory: %p\n", &original);
	printf("Memory: %p\n", &duplicada);
	free(duplicada);
	return (0);
}*/
