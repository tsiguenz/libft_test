/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:01:05 by debian            #+#    #+#             */
/*   Updated: 2021/11/29 21:16:12 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strnstr"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	strnstr_test(void)
{
	int i = 1;

	const char	big1[] = "Hello World !";
	const char	little1[] = "";
	const char	big2[] = "Hello World !";
	const char	little2[] = "Wo";
	const char	big3[] = "Hello World !";
	const char	little3[] = "Hello";
	const char	big4[] = "";
	const char	little4[] = "Hello";
	const char	big5[] = "lorem ipsum dolor sit amet";
	const char	little5[] = "dolor";

	PRINT_STR_TEST(ft_strnstr(big1, little1, 8), strnstr(big1, little1, 8), FILE, i++);
	PRINT_STR_TEST(ft_strnstr(big2, little2, 8), strnstr(big2, little2, 8), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big2, little2, 8), strnstr(big2, little2, 8), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big2, little2, 2), strnstr(big2, little2, 2), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big2, little2, 14), strnstr(big2, little2, 14), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big2, little2, 6), strnstr(big2, little2, 6), FILE, i++);
	PRINT_STR_TEST(ft_strnstr(big3, little3, 8), strnstr(big3, little3, 8), FILE, i++);
	PRINT_STR_TEST(ft_strnstr(big3, little3, 5), strnstr(big3, little3, 5), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big4, little4, 8), strnstr(big4, little4, 8), FILE, i++);
	PRINT_PTR_TEST(ft_strnstr(big5, little5, 15), strnstr(big5, little5, 15), FILE, i++);
	printf("\n");
}
