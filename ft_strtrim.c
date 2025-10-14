/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:14:35 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/14 15:54:29 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		j++;
	while (s1[i] && ft_inset(s1[i], set))
		i++;
	if (j > 0)
		j--;
	while (j > i && ft_inset(s1[j], set))
		j--;
	trimmed = ft_substr(s1, i, (j - i + 1));
	return (trimmed);
}

/*#include <stdio.h>

int	main()
{
	char *s1 = "***Hello World!***";
	char *set = "*";

	printf("the trim strim is: %s\n", ft_strtrim(s1, set));
}*/
