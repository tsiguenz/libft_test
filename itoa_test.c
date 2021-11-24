/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:02:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 14:53:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "itoa"
# define PRINT_STR_TEST	print_str_test

void	itoa_test(void)
{
	int i = 1;

	PRINT_STR_TEST(ft_itoa(5), "5", FILE, i++);
	PRINT_STR_TEST(ft_itoa(-5), "-5", FILE, i++);
	PRINT_STR_TEST(ft_itoa(42), "42", FILE, i++);
	PRINT_STR_TEST(ft_itoa(-42), "-42", FILE, i++);
	PRINT_STR_TEST(ft_itoa(0), "0", FILE, i++);
	PRINT_STR_TEST(ft_itoa(-0), "0", FILE, i++);
	PRINT_STR_TEST(ft_itoa(2147483647), "2147483647", FILE, i++);
	PRINT_STR_TEST(ft_itoa(-2147483648), "-2147483648", FILE, i++);
	printf("\n");
}
