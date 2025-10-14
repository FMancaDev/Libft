/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:17:53 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/13 20:19:31 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char		**words;
	const char	*start;
	size_t		j;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!words)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			words[j++] = ft_substr(start, 0, s - start);
		}
		else
			s++;
	}
	words[j] = NULL;
	return (words);
}

/*#include <stdio.h>

int main(void)
{
    char *str = "Hello,world,test";
    char **result = ft_split(str, ',');
    size_t i = 0;

    if (!result)
        return (1);

    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i++]);
    }
    free(result);
    return (0);
}*/
