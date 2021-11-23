/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:16:21 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/23 16:40:50 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strtrim"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	strtrim_test(void)
{
	int i = 1;

	const char	str1[] = "Hello World      ";
	const char	str2[] = "x"; 
	const char	str3[] = "     Hello World";
	const char	str4[] = " ";
	const char	str5[] = "   Hello World    ";
	const char	str6[] = " ";
	const char	str7[] = "12345678Hello9567890";
	const char	str8[] = "1234567890";
	const char	str9[] = "123456789567890";
	const char	str10[] = "1234567890";

	PRINT_STR_TEST(ft_strtrim(str1, str2), "Hello World      ", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str3, str4), "Hello World", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str5, str6), "Hello World", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str7, str8), "Hello", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str9, str10), "", FILE, i++);
	printf("\n");
}
