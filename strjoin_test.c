/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:21:44 by debian            #+#    #+#             */
/*   Updated: 2021/11/23 00:15:13 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strjoin"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	strjoin_test(void)
{
	int i = 1;

	const char	str1[] = "";
	const char	str2[] = "";
	const char	str3[] = "Hello";
	const char	str4[] = "";
	const char	str5[] = "";
	const char	str6[] = "    Hello";
	const char	str7[] = "Hello ";
	const char	str8[] = "World	";	//tabulation test

	PRINT_STR_TEST(ft_strjoin(str1, str2), "", FILE, i++);
	PRINT_STR_TEST(ft_strjoin(str3, str4), "Hello", FILE, i++);
	PRINT_STR_TEST(ft_strjoin(str5, str6), "    Hello", FILE, i++);
	PRINT_STR_TEST(ft_strjoin(str7, str8), "Hello World	", FILE, i++);
	printf("\n");
}
