/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:43:26 by debian            #+#    #+#             */
/*   Updated: 2021/11/16 00:33:58 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strlcpy"
# define PRINT_INT_TEST	print_int_test
# define PRINT_STR_TEST	print_str_test

void	strlcpy_test(void)
{
        int i = 1;

	const char	mysrc1[] = "abcde";
	const char	src1[] = "abcde";
	char		mydest1[] = "1234567";
	char		dest1[] = "1234567";
	const char	mysrc2[] = "abcd";
	const char	src2[] = "abcd";
	char		mydest2[] = "123";
	char		dest2[] = "123";
	const char	mysrc3[] = "";
	const char	src3[] = "";
	char		mydest3[] = "";
	char		dest3[] = "";
	const char	mysrc4[] = "12345";
	const char	src4[] = "12345";
	char		mydest4[] = "abc";
	char		dest4[] = "abc";

	PRINT_INT_TEST(ft_strlcpy(mydest1, mysrc1, 0), strlcpy(dest1, src1, 0), FILE, i++);
	PRINT_STR_TEST(mydest1, dest1, FILE, i++);
	PRINT_INT_TEST(ft_strlcpy(mydest2, mysrc2, 3), strlcpy(dest2, src2, 3), FILE, i++);
	PRINT_STR_TEST(mydest2, dest2, FILE, i++);
	PRINT_INT_TEST(ft_strlcpy(mydest3, mysrc3, 0), strlcpy(dest3, src3, 0), FILE, i++);
	PRINT_STR_TEST(mydest3, dest3, FILE, i++);
	PRINT_INT_TEST(ft_strlcpy(mydest4, mysrc4, 2), strlcpy(dest4, src4, 2), FILE, i++);
	PRINT_STR_TEST(mydest4, dest4, FILE, i++);
	printf("\n");
}
