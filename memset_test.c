/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:41:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 18:33:00 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "memset"
# define PRINT_STR_TEST	print_str_test
# define PRINT_TAB_TEST	print_tab_test

void	memset_test(void)
{
	int i = 1;

	char	mystr1[] = "Hello World";
	char	str1[] = "Hello World";
	char	mystr2[10] = " ";
	char	str2[10] = " ";
	int	mytab1[5] = {10, 11, 12, 13, 14};
	int	tab1[5] = {10, 11, 12, 13, 14};
	int	mytab2[5] = {20, 21, 22, 23, 24};
	int	tab2[5] = {20, 21, 22, 23, 24};

	PRINT_STR_TEST(ft_memset(mystr1, '_', 6), memset(str1, '_', 6), FILE, i++);
	PRINT_STR_TEST(mystr1, str1, FILE, i++);
	PRINT_STR_TEST(ft_memset(mystr2, 64, 9), memset(str2, 64, 9), FILE, i++);
	PRINT_STR_TEST(mystr2, str2, FILE, i++);
	PRINT_TAB_TEST(ft_memset(mytab1, 255, 1), memset(tab1, 255, 1), 5, FILE, i++);
	PRINT_TAB_TEST(mytab1, tab1, 5, FILE, i++);
	PRINT_TAB_TEST(ft_memset(mytab2, 0, 12), memset(tab2, 0, 12), 5, FILE, i++);
	PRINT_TAB_TEST(mytab2, tab2, 5, FILE, i++);
	printf("\n");
}
