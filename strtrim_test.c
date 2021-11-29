/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:16:21 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/29 22:36:35 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strtrim"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	ft_print_result(char const *s)
{
		int		len;

			len = 0;
				while (s[len])
							len++;
					write(1, s, len);
}

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
	char		str11[] = "          ";

	PRINT_STR_TEST(ft_strtrim(str1, str2), "Hello World      ", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str3, str4), "Hello World", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str5, str6), "Hello World", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str7, str8), "Hello", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str9, str10), "", FILE, i++);
	PRINT_STR_TEST(ft_strtrim(str11, " "), "", FILE, i++);
	PRINT_STR_TEST(str11, "", FILE, i++);

	char s1[] = "          ";
	char	*strtrim;
	if (!(strtrim = ft_strtrim(s1, " ")))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");

	printf("\n");
}
