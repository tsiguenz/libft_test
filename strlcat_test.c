/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:48:53 by debian            #+#    #+#             */
/*   Updated: 2021/11/16 01:05:27 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strlcat"
# define PRINT_INT_TEST	print_int_test
# define PRINT_STR_TEST	print_str_test

void	strlcat_test(void)
{
        int i = 1;

	const char	mysrc1[] = "OK";
	const char	src1[] = "OK";
	char		mydest1[10] = "Test1";
	char		dest1[10] = "Test1";
	const char	mysrc2[] = "Size";
	const char	src2[] = "Size";
	char		mydest2[10] = "Same";
	char		dest2[10] = "Same";
	const char	mysrc3[] = "ThanMyself";
	const char	src3[] = "ThanMyself";
	char		mydest3[20] = "Shorter";
	char		dest3[20] = "Shorter";
	const char	mysrc4[] = "ThanMyself";
	const char	src4[] = "ThanMyself";
	char		mydest4[20] = "Shorter";
	char		dest4[20] = "Shorter";

	PRINT_INT_TEST(ft_strlcat(mydest1, mysrc1, 4), strlcat(dest1, src1, 4), FILE, i++);
	PRINT_STR_TEST(mydest1, dest1, FILE, i++);
	PRINT_INT_TEST(ft_strlcat(mydest2, mysrc2, 10), strlcat(dest2, src2, 10), FILE, i++);
	PRINT_STR_TEST(mydest2, dest2, FILE, i++);
	PRINT_INT_TEST(ft_strlcat(mydest3, mysrc3, 4), strlcat(dest3, src3, 4), FILE, i++);
	PRINT_STR_TEST(mydest3, dest3, FILE, i++);
	PRINT_INT_TEST(ft_strlcat(mydest4, mysrc4, 0), strlcat(dest4, src4, 0), FILE, i++);
	PRINT_STR_TEST(mydest4, dest4, FILE, i++);
	printf("\n");
}
