/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:50:57 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/17 11:08:36 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	ft_upstring(void *c)
{
	int	i = 0;
	char *str = c;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
				    str[i] -= 32;
		i++;
	}
}

void delete(void *content)
{
    free(content);
}
int main()
{
	
	t_list *st ;
	t_list *st1;
	t_list *st2;
	
	char *a = ft_strdup("a");
    char *b = ft_strdup("b");
    char *c = ft_strdup("c");
	
	st = ft_lstnew(a);
	st1 = ft_lstnew(b);
	st2 = ft_lstnew(c);

	st->next = st1;
	st1->next = st2;
	st2->next = NULL;
	
	t_list *t = st;
	while (t)
	{
		printf("Before > %s\n", (char *)t->content);
		t = t->next;
	}
	ft_lstiter(st, ft_upstring);
	t = st;
	while (t)
    {
        printf("After > %s\n", (char *)t->content);
        t = t->next;           
    }
}*/
