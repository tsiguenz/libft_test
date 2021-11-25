/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:00:30 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/25 16:09:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "lstaddfront"
# define PRINT_STR_TEST	print_str_test

void	ft_print_result(t_list *elem)
{
		int		len;

		len = 0;
		while (((char *)elem->content)[len])
					len++;
		write(1, elem->content, len);
		write(1, "\n", 1);
}

void	lstaddfront_test(void)
{
//	int i = 1;
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");
	
	begin = NULL;
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem)
	printf("\n");
	while (begin)
	{
		ft_print_result(begin);
		begin = begin->next;
		printf("\n");
	}
}
