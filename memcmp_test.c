/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:13:03 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/29 17:30:24 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "memcmp"
# define PRINT_INT_TEST	print_int_test
# define PRINT_STR_TEST	print_str_test

void	memcmp_test(void)
{
	int i = 1;

	const char	str1[] = "Hello World !";
	const char	str2[] = "Hello World !";
	const char	str3[] = "Bonjour";
	const char	str4[] = "Bonsoir";
	const char	str5[] = "";
	const char	str6[] = "";
	int		tab1[3] = {1, 5, 10};
	int		tab2[3] = {1, 5, 6};

	PRINT_INT_TEST(ft_memcmp(str1, str2, 5), memcmp(str1, str2, 5), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(str3, str4, 3), memcmp(str3, str4, 3), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(str3, str4, 6), memcmp(str3, str4, 6), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(str5, str6, 0), memcmp(str5, str6, 0), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(str1, str6, 5), memcmp(str1, str6, 5), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(tab1, tab2, 8), memcmp(tab1, tab2, 8), FILE, i++);
//	PRINT_INT_TEST(ft_memcmp(tab1, tab2, 12), memcmp(tab1, tab2, 12), FILE, i++);
	PRINT_INT_TEST(ft_memcmp(tab1, tab2, 0), memcmp(tab1, tab2, 0), FILE, i++);
	PRINT_INT_TEST(ft_memcmp("t\200", "t\0", 2), memcmp("t\200", "t\0", 2), FILE, i++);
	printf("\n");
}
