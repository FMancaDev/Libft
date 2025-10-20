/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:54:15 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/17 10:51:38 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

static void	free_array(char **array, size_t index)
{
	while (index > 0)
		free(array[--index]);
	free(array);
}

static char	*word_separator(const char **s, char c, char **array, size_t index)
{
	size_t	len;
	char	*word;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		++len;
	word = ft_substr(*s, 0, len);
	if (!word)
	{
		free_array(array, index);
		return (NULL);
	}
	*s += len;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	index;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			array[index] = word_separator(&s, c, array, index);
			if (!array[index])
				return (NULL);
			index++;
		}
		else
			++s;
	}
	array[index] = NULL;
	return (array);
}

/*#include <stdio.h>

int main(void)
{
    char *str = "Hello_world_test";
    char **result = ft_split(str, '_');
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
