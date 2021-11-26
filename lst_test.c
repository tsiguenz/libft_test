/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:45:54 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/26 21:39:03 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	ft_del(void *content)
{
	free(content);
}

void	print_lst(t_list *lst)
{
	while (lst->next)
	{
		printf("%s\n", (char *) lst->content);
		if (lst->next)
			lst = lst->next;
	}
}

void	ft_modify_list_with_d(void *elem)
{
	int		len;
	char		*content;

	len = 0;
	content = (char *)elem;
	while (content[len])
	{
		content[len++] = 'd';
	}
}

void	lst_test(void)
{

	char	*str1 = strdup("toto");
	char	*str2 = strdup("tata");
	char	*str3 = strdup("titi");
	char	*str4 = strdup("tutu");
	char	*str5 = strdup("tete");
	t_list	*lst1 = ft_lstnew(str1);
	t_list	*lst2 = ft_lstnew(str2);
	t_list	*lst3 = ft_lstnew(str3);
	t_list	*lst4 = ft_lstnew(str4);
	t_list	*lst5 = ft_lstnew(str5);
	t_list	*p_lst;

	p_lst = lst2;
	ft_lstadd_front(&p_lst, lst1);
	ft_lstadd_back(&p_lst, lst3);
	ft_lstadd_back(&p_lst, lst4);
	ft_lstadd_back(&p_lst, lst5);

	print_int_test(ft_lstsize(p_lst), 5, "lstsize / addback / addfront", 1);
	print_str_test((char *) ft_lstlast(p_lst)->content, "tete", "lst_last", 2);
//	test
//	ft_lstdelone(lst2, &ft_del);
//	printf("toto, titi = %s, %s\n", (char *) lst1->content, (char *) lst3->content);
	p_lst = lst3;
//	ft_lstclear(&p_lst, ft_del);
//	print_lst(lst1);
	ft_lstiter(lst1, &ft_modify_list_with_d);
	print_lst(lst1);
}
