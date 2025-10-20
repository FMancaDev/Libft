/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:54:43 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:54:45 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*#include <ctype.h>
#include <stdio.h>

void to_uppercase(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = (char)toupper((unsigned char)*c);
}

int main(void)
{
    char str[] = "Olá, mundo!";

    printf("Original: %s\n", str);

    ft_striteri(str, to_uppercase);

    printf("Modificada: %s\n", str);

    return 0;
}*/
