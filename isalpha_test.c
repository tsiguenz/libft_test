/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:07:27 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/09 23:30:31 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_alpha"
# define MY_FT(a)	bool_test(ft_isalpha(a))
# define REAL_FT(a)	bool_test(isalpha(a))
# define PRINT_TEST	print_int_test


void	isalpha_test(void)
{
	int	i;

	i = 0;
	PRINT_TEST(MY_FT(-256), REAL_FT(-256), FILE, i++);
	PRINT_TEST(MY_FT(-1), REAL_FT(-1), FILE, i++);
	PRINT_TEST(MY_FT(0), REAL_FT(0), FILE, i++);
	PRINT_TEST(MY_FT(64), REAL_FT(64), FILE, i++);
	PRINT_TEST(MY_FT(65), REAL_FT(65), FILE, i++);
	PRINT_TEST(MY_FT(96), REAL_FT(96), FILE, i++);
	PRINT_TEST(MY_FT(97), REAL_FT(97), FILE, i++);
	PRINT_TEST(MY_FT(122), REAL_FT(122), FILE, i++);
	PRINT_TEST(MY_FT(123), REAL_FT(123), FILE, i++);
	PRINT_TEST(MY_FT(255), REAL_FT(255), FILE, i++);
	printf("\n");
}
