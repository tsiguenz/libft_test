/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:31:15 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/17 14:40:38 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strncmp"
# define PRINT_INT_TEST	print_int_test
# define PRINT_STR_TEST	print_str_test

void	strncmp_test(void)
{
	int i = 1;

	const char	str1[] = "Hello World !";
	const char	str2[] = "Hello World !";
	const char	str3[] = "Bonjour";
	const char	str4[] = "Bonsoir";
	const char	str5[] = "";
	const char	str6[] = "";

	PRINT_INT_TEST(ft_strncmp(str1, str2, 5), strncmp(str1, str2, 5), FILE, i++);
	PRINT_INT_TEST(ft_strncmp(str3, str4, 3), strncmp(str3, str4, 3), FILE, i++);
	PRINT_INT_TEST(ft_strncmp(str3, str4, 6), strncmp(str3, str4, 6), FILE, i++);
	PRINT_INT_TEST(ft_strncmp(str5, str6, 0), strncmp(str5, str6, 0), FILE, i++);
	PRINT_INT_TEST(ft_strncmp(str1, str6, 5), strncmp(str1, str6, 5), FILE, i++);
	printf("\n");
}
