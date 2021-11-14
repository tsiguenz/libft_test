/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:25:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/14 19:55:14 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "bzero"
# define PRINT_STR_TEST	print_str_test
# define PRINT_TAB_TEST	print_tab_test

void	bzero_test(void)
{
        int i = 1;

	char	mystr1[] = "Hello World";
	char	str1[] = "Hello World";
	char	mystr2[10] = " ";
	char	str2[10] = " ";
	int	mytab1[5] = {10, 11, 12, 13, 14};
	int	tab1[5] = {10, 11, 12, 13, 14};

	ft_bzero(mystr1, 6);
	bzero(str1, 6);
	PRINT_STR_TEST(mystr1, str1, FILE, i++);
	ft_bzero(mystr2, 9);
	bzero(str2, 9);
	PRINT_STR_TEST(mystr2, str2, FILE, i++);
	ft_bzero(mytab1, 5);
	bzero(tab1, 5);
	PRINT_TAB_TEST(mytab1, tab1, 5, FILE, i++);
        printf("\n");
}
