/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:04:34 by debian            #+#    #+#             */
/*   Updated: 2021/11/18 01:36:37 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "atoi"
# define PRINT_INT_TEST	print_int_test

void	atoi_test(void)
{
	int i = 1;

	const char	str1[] = "42";
	const char	str2[] = "123456789 --   ";
	const char	str3[] = "0";
	const char	str4[] = "-9";
	const char	str5[] = "2147483647";
	const char	str6[] = "--244748367";
	const char	str7[] = "      -244748367  a  ";

	PRINT_INT_TEST(ft_atoi(str1), atoi(str1), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str2), atoi(str2), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str3), atoi(str3), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str4), atoi(str4), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str5), atoi(str5), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str6), atoi(str6), FILE, i++);
	PRINT_INT_TEST(ft_atoi(str7), atoi(str7), FILE, i++);
	printf("\n");
}
